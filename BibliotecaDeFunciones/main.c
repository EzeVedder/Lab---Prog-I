#include <stdio.h>
#include <stdlib.h>

float dividirFloat(float,float);
int main()
{
    int result;
    int n1;
    int n2;

    printf("Ing un num:");
    scanf("%f",&n1);
    printf("Ing un num:");
    scanf("%f",&n2);

    result = dividirFloat(n1,n2);

    printf("El resultado es: &f",result);

    return 0;
}
    float dividirFloat(float a,float b)
    {
    float cociente;//defino la variable que retorna
    if(b != 0)
    {
            cociente = (float)a/b;
    }
    return cociente;
    }
