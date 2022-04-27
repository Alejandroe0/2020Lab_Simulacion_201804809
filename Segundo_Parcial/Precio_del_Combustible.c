/*
Autor:         Alejandro Barillas
Fecha:         Wed Apr 27 12:50:41 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Precio_del_Combustible.out Precio_del_Combustible.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Se busca para cuando se proyecta que el precio del combustible sea de Q30.00
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definir variables basandonos en el fit.log que genera nuestro archivo Precio_del_Combustible.gp
float a=0.445515, b=19.667, aux1, aux2;

int main(){
    //Lee muestro al usuario los valores de a y b
    printf("El valor de a es %f \n", a);
    printf("El valor de b es %f \n", b);
    printf("La proyeccion para el valor 30 esta dado por la ecuacion 30= %f x + %f\n", a,b);
    printf("Restando %f de ambos lados\n", b);
    aux1=30-b;
    printf("La proyeccion para el valor 30 esta dado por la ecuacion %f = %f x\n", aux1,a);
    printf("Dividiendo por %f de ambos lados\n", a); 
    aux2=aux1/a;
    printf("El valor de x es %f \n", aux2);
}

