/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Tue Apr 26 23:03:04 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Newton_Raphson.out Newton_Raphson.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Ejemplo basico del metodo numerico de NewtonRaphson para 2+cos(e^(x)-2)-e^(x)
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipos de funciones
// Funcion original
float f(float x);
// La derivada de la funcion
float df(float x);
//El método Númerico
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);

void main (void)
{
    //definir variables
    float x_inicial, tolerancia, xS;
    int iteraciones, Aiteracion;
    
    //obtener datos
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d",&iteraciones);

    //Ejecuta el metodo númerico
    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xS);
    //Verifica si ya se cumplio el numero de iteraciones
    if (Aiteracion == iteraciones)
        //Si si se cumplio y no se ha llegado a la tolerancia devuelve el mensaje
        printf("\nNo hay solucion despues de %d iteraciones\n",iteraciones);
    else
    {
        //Si ya llego a la tolerancia, muestra el resultado y el numero de iteraciones
        printf("\nLuego de %d iteraciones la solucion es %.4f\n",Aiteracion,xS);
    }
}

//Declaracion del método numerico
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{
    // Declaro la variables
    float xant, x, dif;
    int i=1;
    //Inicializo las variables locales
    xant=x0;
    x=xant-f(xant)/df(xant);
    dif = x-xant;
    //Valuamos si la diferencia es menor que la tolerancia
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    //Ciclo mientras la diferencia sea menor que la tolerancia e i menor que las iteraciones maximas
    while (dif>tol && i<maxiter)
    { 
        // Se ejecuta el metodo numerico       
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    *sol=x;
    *actiter = i;
}

// Se declara la funcion original
float f(float x)
{
    
    float res = 0, aux1=0;
    //Es mi variable del argumento del coseno
    aux1 = exp(x)-2;
    //La variable almacena La funcion original
    res = 2 + cos(aux1)-exp(x);
    return res;
}

// Se declara la primera derivada de la funcion original
float df(float x)
{
    //Declarto las variables locales
    float res = 0, aux1=0;
    //Es mi variable del argumento del seno
    aux1=2-exp(x);
    ////La variable almacena La derivada de la funcion original
    res = exp(x)*sin(aux1)-exp(x);
    return res;
}