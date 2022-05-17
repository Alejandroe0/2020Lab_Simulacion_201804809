/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 16:45:11 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Problema1.out Problema1.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Se ordenara una lista de 10 numeros pares
*/

//librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//definir variables
    int data[10]={2,20,4,18,6,16,8,14,10,12};
    int val=0, val1;


void main (void)
{
    
    

    while (val==0)
    {
        printf("si lo quiere ordenar de forma asendente ingrese 1\n");
        printf("si lo quiere ordenar de forma desendente ingrese 2\n");
        scanf("%d", &val1);

        if (val1 == 1)
        {
            puts("\nOrdenando");
            int interruptor = 1;
            int pasada, j;
            //bucle que controla la cantidad de padas
            for (pasada = 0; pasada < 9 && interruptor; pasada++)
            {
                interruptor = 0;
                //maneja el paso por el vector
                for (j = 0; j < 10-pasada-1; j++)
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
            for (int i = 0; i < 10; i++)
            {
                /* ingresar numeros al azar con la funcion rand */
                printf("%d ",data[i]);
            }
            puts("\nFIN");
            val=1;


        }else if (val1==2)
        {
            puts("\nOrdenando");
            int interruptor = 1;
            int pasada, j;
            //bucle que controla la cantidad de padas
            for (pasada = 0; pasada < 9 && interruptor; pasada++)
            {
                interruptor = 0;
                //maneja el paso por el vector
                for (j = 0; j < 10-pasada-1; j++)
                {
                    //validando que el seleccionado sea mayor al siguiente
                    if (data[j] < data[j+1])
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
            for (int i = 0; i < 10; i++)
            {
                /* ingresar numeros al azar con la funcion rand */
                printf("%d ",data[i]);
            }
            puts("\nFIN");
            val=1;

        }else
        {
            puts("Por favor ingrese una de los caracteres validos\n");
            val=0;
        }
        
        
        
    }

    return 0;
    
}



