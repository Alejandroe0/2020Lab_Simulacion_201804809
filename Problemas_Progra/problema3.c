/*
Autor:         Alejandro Barillas
Fecha:         Thu Apr 21 13:39:35 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o problema3.out problema3.c
Librerias:     stdio
Resumen:       El programa calcula la raiz cuadrada de un número positivo.
*/

//librerias
#include <stdio.h>
//declaracion e inicializacion de variables
float n;
int i=1;

int main(){
    //1. leer el numero N
    puts("Ingrese el número al que se le calculará una la parte entera de de su raiz cuadrada");
    scanf("%f", &n);
    
    //3. Se calcula el valor entero
    while (i*i<=n)
    {
        i=i+1;
    }
        i=i-1;
    printf("El valor entero de la raiz de %f es %i \n", n, i);
    
}