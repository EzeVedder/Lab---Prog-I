#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/*
int main()
{

    int vector[5] = {9, -3, 5, 14, -4};
    int i;

    for(i=0 ; i<5 ; i++)
    {
        printf("%d -- %d\n",i,vector[i]);
    }


    return 0;
}

/*
int main()
{
    int vector[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d -- %d\n",i,vector[i]);
    }


    return 0;
}
*/

/*
int main()
{
    int vector[5];
    int i;

    for(i=0;i<5;i++)
    {
        vector[i] = -1);
    }


    return 0;
}


int main()
{
    int vector[5];
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]); //&para la direccion de memoria
    }

    for(i=0;i<TAM;i++)//muestra los elementos de los vectores
    {
        printf("%d -- %d\n",i,vector[i]);
    }



    return 0;
}
*/
    void mostrarVector(int vec[],int tamanio );//siempre que se recibe como parametro un vector, la funcion recibe el vector y el 2do la cantidad de elementos

    int main(){

    int i;
    int vector[5];

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]); //&para la direccion de memoria
    }

    mostrarVector(vector,TAM);

    return 0;

    }

    //funcion que muestra un vector
    void mostrarVector(int vec[],int tamanio )
    {

    int i;

     for(i=0;i<tamanio;i++)//muestra los elementos de los vectores
    {
        printf("%d -- %d\n",i,vec[i]);
    }
    }
