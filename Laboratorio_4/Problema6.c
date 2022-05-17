/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 23:38:14 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Problema6.out Problema6.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Sumatorias
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
float res=0;

int main()
{
    
    //Pido que ingrese el numero entero n
    printf("Ingrese un entero de iteraciones ");
    scanf("%d", &n);

    //Programo la primera sumatoria
    for (int i = 1; i <= n; i++)
    {
        res=res+i*i*(i-3);
    }
    //Imprimo el resultado
    printf("El resultado de la primera sumatoria es %f\n", res);




    //----------------------------------------------------------------------------------
    //Seteo res en cero
    res=0;
    //Programo la segunda sumatoria
    for (int i = 2; i <= n; i++)
    {
        res=res+(3/(i-1));
    }
    //Imprimo el resultado (Da un error por que la division entre cero no esta definida)
    printf("Se inicia la sumatoria desde 2 para que no se indefina el resultado\n");
    printf("El resultado de la segunda sumatoria es %f\n", res);


    //----------------------------------------------------------------------------------
    //Seteo res en cero
    res=0;
    //Programo la tercera sumatoria
    for (int i = 1; i <= n; i++)
    {
        res=res+(1/(sqrt(5)))*pow(((1+sqrt(5))/(2)),n)-(1/(sqrt(5)))*pow(((1-sqrt(5))/(2)),n);
    }
    //Imprimo el resultado 
    printf("El resultado de la tercera sumatoria es %f\n", res);


    //----------------------------------------------------------------------------------
    //Seteo res en cero
    res=0;
    //Programo la cuarta sumatoria
    for (int i = 1; i <= n; i++)
    {
        res=res+0.1*(3*pow(2,i-2)+4);
    }
    //Imprimo el resultado 
    printf("El resultado de la cuarta sumatoria es %f\n", res);

    return 0;
}