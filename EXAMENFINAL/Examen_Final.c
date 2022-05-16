/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 08:28:07 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Examen_Final.out Examen_Final.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Ejemplo basico del metodo numerico de NewtonRaphson para 2+cos(e^(x)-2)-e^(x)
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipos de funciones
// Funcion para la simulacion
float cohete1(float E0, float TSFC, float CD, float A, float m0, float mf0);


//La funcion de Fa
float fa(float t, float CD, float A, float P, float Vant, float Aant);
//La funcion de p(y)
float py(float t, float P0, float R, float T0, float YT, float L, float g0);
//El método Númerico
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);


void main (void)
{
    //definir variables
    float G, Rt, Mt, R, L, g0, T0, P0;
    int iteraciones, Aiteracion;
    
    //Declaro mis constantes
    G=6.693*pow(10,-11);
    Rt=6.378*pow(10,6);
    Mt=5.9736*pow(10,24);
    R=287.06;
    L=6.5*pow(10,-3);
    g0=9.81;
    T0=288.15;
    P0=101325;

    //obtener datos
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: (se recomienda 100)");
    scanf("%d",&iteraciones);

}


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

// Se declara la funcion fa
float fa(float t, float CD, float A, float P, float Vant, float Aant)
{
    
    float res = 0, aux1=0;
    //Es el argumento que tiene el valor de aceleracion
    aux1=Vant+Aant*t;
    //Es la ecuacion original
    res = (1/2)*P*CD*A*(aux1)*fabs(aux1);
    return res;
}




// Se declara la funcion p(y)
float py(float t, float P0, float R, float T0, float YT, float L, float g0)
{
    
    float res = 0, aux1=0, aux2=0, aux3=0;
    aux3 = L;
    //Es la base de la potencia
    aux1=(1-((aux3)/(T0));
    //Es la exponente de la potencia
    aux2=(g0/(R*L)); 
    //Es la ecuacion original
    res = (1/2)*(P0/(R*T0))*pow(aux1,aux2);
    return res;
}

