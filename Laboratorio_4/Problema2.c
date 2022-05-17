/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 18:20:04 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Problema2.out Problema2.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Se ordenara una lista de 10 numeros pares
*/

//librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//Declaro la variable del vector 
int data[5];


int main(){
    //1. For para almacenar los numeros del usuario
    for (int i = 0; i < 5; i++)
    {
        //Pido la posicion i del vector
        printf("ingresar la posicion %d del vector\n",(i+1));
        scanf("%d", &data[i]);
    }
    
    //Inicio el ordenamiento
    puts("\nOrdenando");
        int interruptor = 1;
        int pasada, j;
        //bucle que controla la cantidad de pasadas
        for (pasada = 0; pasada < 5-1 && interruptor; pasada++)
        {
            interruptor = 0;
            //maneja el paso por el vector
            for (j = 0; j < 5-pasada-1; j++)
            {
                //validando que el seleccionado sea mayor al siguiente
                if (data[j] > data[j+1])
                {
                    int aux;
                    printf("cambio %d %d a ",data[j],data[j+1]);
                    aux = data[j];
                    data[j] = data[j+1];
                    data[j+1] = aux;
                    printf("%d %d \n",data[j],data[j+1]);
                }
                interruptor = 1;
            }   
        }
        puts("\nVertor Ordenado");
        for (int i = 0; i < 5; i++)
        {
            /* Imprimo el vector ordenado  */
            printf("%d ",data[i]);
        }
        puts("\nFIN");
    
    return 0;
}