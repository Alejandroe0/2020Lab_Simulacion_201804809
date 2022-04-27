/*
Autor:         Alejandro Barillas
Fecha:         Tue Apr 26 19:09:22 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o problema5.out problema5.c
Librerias:     stdio
Resumen:       El programa imprime los numeros primos dentro de un rengo dado .
*/

//librerias
#include <stdio.h>
//declaracion e inicializacion de variables
int n1, n2, i=2, mod, primo=1, a, count, conut2=0;

int main(){
    puts("Ingrese el número a entero menor");
    scanf("%d", &n1);
    //1. leer el numero N
    puts("Ingrese el número a verificar");
    scanf("%d", &n2);
    

    for (count=n1; count <= n2; count++)
    {
        //Tomamos el entero menor que n
        a=count-1;
        primo=1;
        i=2;
        //Verificamos las condicones para que la iteracion de validacion
        while (i<=a && primo==1)
        {
            mod=count % i;
            
            //vemos los modulos de todos los enteros entre 2 y n.
            if (mod==0)
            {
                primo=0;
                i=i+1;
            }else
            {
                i=i+1;
            }
            
        }
        //Valuamos nuestra variable de control del numeor primo
        if (primo==1 && conut2==0)
        {
            printf("Los números primos dentro del rango son \n");
            printf("%d \n", count);
            conut2=conut2+1;
            
        }
        else if (primo==1 && conut2!=0)
        {
            printf("%d \n", count);
        }
        

        
    }
    
    
        
}