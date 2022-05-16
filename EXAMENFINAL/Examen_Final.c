/*
Autor:         Alejandro Barillas, inspirado por Maynor Ballina
Fecha:         Mon May 16 08:28:07 CST 2022
compilador:    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:      gcc -o Examen_Final.out Examen_Final.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Ejemplo basico del metodo numerico de NewtonRaphson para 2+cos(e^(x)-2)-e^(x)
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipos de funciones
// Funcion para la gravedad
float gy(float G, float Mt, float Rt, float YT);
//La funcion de Fa
float fa(float CD, float A, float P, float V);
//La funcion de p(y)
float py(float P0, float R, float T0, float YT, float L, float g0);
//La funcion derivada para la masa
float dfmf(float t, float E0, float TSFC, float mf0);
//La funcion de masa
float mc(float m0, float mf);

void main (void)
{
    //definir variables
    float G, Rt, Mt, R, L, g0, T0, P0;
    float E0, TSFC, CD, A, m0, mf0,Y0,h,denaire,masacomb,V,P,Acele,mf,g;
    float masa;
    int iteraciones, Aiteracion;
    
    //Declaro mis constantes
    G=6.693*pow(10,-11);
    Rt=6.378*pow(10,6);
    Mt=5.9736*pow(10,24);
    R=287.06;
    L=6.5*pow(10,-3);
    g0=9.81;
    T0=288.15;
    P0=101325;
    

    //Datos especificos de un cohete
    E0=3*pow(10,7);
    TSFC=3.248*pow(10,-4);
    CD=61.27;
    A=1.1*pow(10,5);
    mf0=1.5*pow(10,6);
    Y0=0.09;

    V=0;
    h=Y0;
    Acele=0;
    masa=dfmf(0, E0, TSFC, mf0);
    masacomb=dfmf(0, E0, TSFC, mf0);
    for (int t = 0; masa <= 0; t=+0.1)
    {
        if (h<(T0/L) && masacomb>0)
        {
            P=py(P0, R, T0, h, L, g0);
            mf=dfmf(t, E0, TSFC, mf0);
            Acele=(E0-fa(CD, A, P, V)-mc(m0, mf)*gy(G, Mt, Rt, h))/mc(m0, mf);

        }else if (h>=(T0/L) && masacomb>0)
        {
            P=0;
            mf=dfmf(t, E0, TSFC, mf0);
            Acele=(E0-fa(CD, A, P, V)-mc(m0, mf)*gy(G, Mt, Rt, h))/mc(m0, mf);

        }else if (h<(T0/L) && masacomb<=0)
        {
            P=py(P0, R, T0, h, L, g0);
            mf=dfmf(t, 0, TSFC, mf0);
            Acele=(0-fa(CD, A, P, V)-mc(m0, mf)*gy(G, Mt, Rt, h))/mc(m0, mf);

        }else if (h>=(T0/L) && masacomb<=0)
        {
            P=0;
            mf=dfmf(t, 0, TSFC, mf0);
            Acele=(0-fa(CD, A, P, V)-mc(m0, mf)*gy(G, Mt, Rt, h))/mc(m0, mf);
        }

        FILE *pf = fopen("Datos","wt");
        
        


        V=V+Acele*t;
        h=h+V*t+0.5*Acele*t*t;
        
        
    }
    



}

// Se declara la funcion g(Y)
float gy(float G, float Mt, float Rt, float YT)
{
    
    float res = 0, aux1=0;
    //Es el argumento que tiene el valor de la potencia
    aux1=Rt+YT;
    //Es la ecuacion original
    res = ((G*Mt)/(pow(aux1,2)));
    return res;
}


// Se declara la funcion fa
float fa(float CD, float A, float P, float V)
{
    
    float res = 0, aux1=0;
    //Es el argumento que tiene el valor de velocidad
    aux1=V;
    //Es la ecuacion original
    res = (1/2)*P*CD*A*(aux1)*fabs(aux1);
    return res;
}




// Se declara la funcion p(y)
float py(float P0, float R, float T0, float YT, float L, float g0)
{
    
    float res = 0, aux1=0, aux2=0, aux3=0;
    aux3 = L*YT;
    //Es la base de la potencia
    aux1=(1-((aux3)/(T0)));
    //Es la exponente de la potencia
    aux2=(g0/(R*L)); 
    //Es la ecuacion original
    res = (1/2)*(P0/(R*T0))*pow(aux1,aux2);
    return res;
}


// Se declara la funcion dmf(t)
float dfmf(float t, float E0, float TSFC, float mf0)
{
    float res = 0;
    //Es la ecuacion original
    res = mf0-TSFC*E0*t;
    return res;
}


// Se declara la funcion dmf(t)
float mc(float m0, float mf)
{
    float res = 0;
    //Es la ecuacion original
    res = m0+mf;
    return res;
}
