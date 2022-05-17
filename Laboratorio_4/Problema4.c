/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 18:39:41 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Problema4.out Problema4.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Se realizan operaciones con matrices
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Declaro la variable del vector 
float matA[3][3];
float matB[3][3];
float res[3][3];
float inter=0;
float ina1, ina2, inb, inc, ind, c1, determinanteA;



int main(){
    //1. For para almacenar la primera matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Pido la matriz 1
            printf("ingresar la fila %d columna %d de la primera matriz\n",(i+1),(j+1));
            scanf("%f", &matA[i][j]);
        }
        
    }

    //1. For para almacenar la segunda matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Pido la matriz b
            printf("ingresar la fila %d columna %d de la segunda matriz\n",(i+1),(j+1));
            scanf("%f", &matB[i][j]);
        }
        
    }

    //Leo lka constante que proporciona el usuario
    printf("ingrese el valor de una constante");
    scanf("%f", &c1);

    //--------------------------------------------------------------------------------------------------
    //Multiplicacion por escalar
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Asigno el valor correcto a la matriz de resultado
            res[i][j]=matA[i][j]*c1;
        }    
    }


    //Imprimo la matriz resultado
    printf("La multiplicacion de la matriz A por %f es \n", c1);
    puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", res[i][j]);
        }
        puts("\n");
    }
    

    //-------------------------------------------------------------------------------
    //Suma de matrices 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Asigno el valor correcto a la matriz de resultado
            res[i][j]=matA[i][j]+matB[i][j];
        }    
    }

    //Imprimo la matriz resultado
    printf("La suma de matrices es \n");
    puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", res[i][j]);
        }
        puts("\n");
    }



    //-------------------------------------------------------------------------------
    //Resta de matrices 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Asigno el valor correcto a la matriz de resultado
            res[i][j]=matA[i][j]-matB[i][j];
        }    
    }

    //Imprimo la matriz resultado
    printf("La resta de matrices es \n");
    puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", res[i][j]);
        }
        puts("\n");
    }




    //-------------------------------------------------------------------------------
    //Multiplicacion de matrices 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                inter=inter+matA[i][k]*matB[k][j];
            }
            res[i][j]=inter;
            inter=0;
        }    
    }

    //Imprimo la matriz resultado
    printf("La multiplicacion de matrices es \n");
    puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", res[i][j]);
        }
        puts("\n");
    }


    //-------------------------------------------------------------------------------
    //Determinante de matriz A
    inter=0;
    inter=matA[0][0]*(matA[1][1]*matA[2][2]-matA[1][2]*matA[2][1]);
    inter=inter-matA[0][1]*(matA[1][0]*matA[2][2]-matA[1][2]*matA[2][0]);
    determinanteA=inter+matA[0][2]*(matA[1][0]*matA[2][1]-matA[1][1]*matA[2][0]);
    //Imprimo el determinante
    printf("El determinante de la matriz A es %f \n", determinanteA);
    puts("\n");



    //-------------------------------------------------------------------------------
    //Transpuesta de una matriz 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Cambio los indices
            res[j][i]=matB[i][j];
        }    
    }

    //Imprimo la matriz resultado
    printf("La la transpuesta de B es \n");
    puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", res[i][j]);
        }
        puts("\n");
    }




    return 0;
}