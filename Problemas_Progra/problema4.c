/*
Autor:         Alejandro Barillas
Fecha:         Fri Apr 22 16:32:24 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o problema4.out problema4.c
Librerias:     stdio
Resumen:       El programa verifica si un número dado mayor que 1 es primo .
*/

//librerias
#include <stdio.h>
//declaracion e inicializacion de variables
int n, i=2, mod, primo=1, a;

int main(){
    //1. leer el numero N
    puts("Ingrese el número a verificar");
    scanf("%d", &n);
    
    //Tomamos el entero menor que n
    a=n-1;

    //Verificamos las condicones para que la iteracion de validacion
    while (i<=a && primo==1)
    {
       mod=n % i;
       
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
    if (primo==0)
      {
          printf("%d no es primo \n", n);
      }else
      {
          printf("%d es primo \n", n);
      }
        
}