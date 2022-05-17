/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 23:09:35 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Problema5.out Problema5.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Factorial de un numero con recursividad
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// declara el método antes de usarlo para evitar errores: tipos en conflicto para 'factorial'
float factorial(int);

// Ejemplo de uso:
int main()
{
    int fact;
    //Pido que ingrese el numero entero
    printf("Ingrese un entero para calcular su factorial");
    scanf("%d", &fact);

    // Imprime: Factorial n
    printf("Factorial de %d is: %f\n", fact, factorial(fact));

    return 0;
}

// Función que devuelve el factorial de un número de forma recursiva
float factorial(int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}