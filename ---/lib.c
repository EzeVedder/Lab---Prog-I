#include "lib.h"

int sumaEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoTemporal;
    int retorno = -1;

    resultadoTemporal = numero1 + numero2;
    if(resultadoTemporal < 32767 && resultadoTemporal > -32768)
    {
        *resultado = resultadoTemporal;
        retorno = 0;
    }

    return retorno;
}

int restaEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoTemporal;
    int retorno = -1;

    resultadoTemporal = numero1 - numero2;
    if(resultadoTemporal < 32767 && resultadoTemporal > -32768)
    {
        *resultado = resultadoTemporal;
        retorno = 0;
    }

    return retorno;
}

int multiplicacionEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoTemporal;
    int retorno = -1;

    resultadoTemporal = numero1 * numero2;
    if(resultadoTemporal < 32767 && resultadoTemporal > -32768)
    {
        *resultado = resultadoTemporal;
        retorno = 0;
    }

    return retorno;
}

int divisionEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoTemporal;
    int retorno = -1;

    if(numero2 != 0)
    {
        resultadoTemporal = (float)numero1 / numero2;

        if(resultadoTemporal < 32767 && resultadoTemporal > -32768)
        {
            *resultado = resultadoTemporal;
            retorno = 0;
        }
    }

    return retorno;
}
