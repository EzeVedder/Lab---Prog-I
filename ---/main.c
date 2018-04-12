#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int numero1;
    int numero2;
    int operacion;
    int retorno;
    float resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);

    printf("\nElija la operacion a realizar:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n");
    fflush(stdin);
    scanf("%d", &operacion);
    switch(operacion)
    {
    case 1:
        retorno = sumaEnteros(numero1, numero2, &resultado);
        break;
    case 2:
        retorno = restaEnteros(numero1, numero2, &resultado);
        break;
    case 3:
        retorno = multiplicacionEnteros(numero1, numero2, &resultado);
        break;
    case 4:
        retorno = divisionEnteros(numero1, numero2, &resultado);
        break;
    default:
        printf("Error");
        return -1;
    }

    if(retorno == 0)
    {
        printf("\nEl resultado es: %.2f\n", resultado);
        return 0;
    }
    else
    {
        printf("\nError");
        return -1;
    }
}
