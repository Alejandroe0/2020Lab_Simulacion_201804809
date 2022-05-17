/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 18:39:41 CST 2022
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
float vec1[3];
float vec2[3];
float res[3];
float ina1, ina2, inb, inc, ind;


//Prototipado de funciones
//Funcion de magnitud
float mag(float vec[3]);


void main(void){
    //1. For para almacenar la primera posicion
    for (int i = 0; i < 3; i++)
    {
        //Pido el vector 1
        printf("ingresar la cordenada %d del primer vector\n",(i+1));
        scanf("%f", &vec1[i]);
    }

    //1. For para almacenar la segunda posicion
    for (int i = 0; i < 3; i++)
    {
        //Pido el vector 2
        printf("ingresar la cordenada %d del segundo vector\n",(i+1));
        scanf("%f", &vec2[i]);
    }
    
    //Mmuestro las magnitudes
    printf("La magnitud del primer vector es %f\n",mag(vec1));
    printf("La magnitud del segundo vector es %f\n",mag(vec2));
    puts("\n");

    //Suma de vectrores
    printf("La suma de vectores es ");
    for (int i = 0; i < 3; i++)
        {
            //Variable para cada cordenada
            float aux;
            aux=vec1[i]+vec2[i];
            /* Imprimo el vector ordenado  */
            printf("%f ", aux);
        }
    puts("\n");


    //Producto escalar
    printf("El producto escalar es ");
    for (int i = 0; i < 3; i++)
        {
            //Sumo el producto de coordenadas
            inc=inc+vec1[i]*vec2[i];
        }
    //Imprimo el resultado
    printf("%f ", inc);
    puts("\n");

    
    //Producto vectorial
    printf("El producto escalar es ");
    //Calculamos cada coordenada
    float aux1, aux2, aux3;
    aux1=vec1[1]*vec2[2]-vec1[2]*vec2[1];
    aux2=vec1[0]*vec2[2]-vec1[2]*vec2[0];
    aux3=vec1[0]*vec2[1]-vec1[1]*vec2[0];
    /* Imprimo el vector ordenado  */
    printf("%f %f %f", aux1, -aux2, aux3);
    puts("\n");
   
}


// Funcion magnitud
float mag(float vec[3])
{
    
    float res = 0, aux1=0;
    //Es el argumento que tiene el valor de la raiz
    aux1=vec[0]*vec[0]+vec[1]*vec[1]+vec[2]*vec[2];
    //Calculo la magnitud
    res = sqrt(aux1);
    return res;
}





