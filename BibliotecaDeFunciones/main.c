#include <stdio.h>
#include <stdlib.h>


int main()
{
    float A;
    float B;
    float Resultado;

    A = pedirFloat("Ingrese un numero",1,100);
    B = pedirFloat("Ingrese un numero",1,100);

    Resultado = sumar(A,B);

    printf("Esta es la suma %.2f",Resultado);


}









