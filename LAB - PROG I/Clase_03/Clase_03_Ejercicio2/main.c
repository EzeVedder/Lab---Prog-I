#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[],int,int);//no hace falta poner int en el parentesis
int validarEntero(int,int,int,char[]);//funcion para validar un dato, que es llamada desde otra funcion

int main()
{
    int Edad;//18-60  Esta no es la misma variable que declare en la funcion
    int Legajo;//1-1050
    int Nota;//0-10

    Edad = pedirEntero(" edad: ",18,60);
    Legajo = pedirEntero(" legajo: ",1,1050);
    Nota = pedirEntero(" nota ",1,10);
    printf("La edad es: %d y el legajo es: %d y la nota es: %d",Edad,Legajo,Nota);

    return 0;
}

//ESTO ES UNA FUNCION GENERICA
int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("Ingrese%s",mensaje);//%s es para una cadena (STRING)
    scanf("%d",&numero);

    numero = validarEntero(numero,min,max,mensaje);

    return numero;
}

int validarEntero(int dato,int min,int max,char mensaje[])
{
        while(dato < min || dato > max)
    {
        printf("Error Reingrese%s",mensaje);//%s es para una cadena (STRING)
        scanf("%d",&dato);
    }
}
