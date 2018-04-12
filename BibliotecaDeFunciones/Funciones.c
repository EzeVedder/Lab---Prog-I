//Funcion para sumar dos numeros decimales
float sumar(float n1,float n2){

    float suma;
    suma = n1+n2;

    return suma;

}

//Funcion para pedir dos numeros con decimal
float pedirFloat(char mensaje[], float min, float max){


    float a;
    printf("Ingrese %s", mensaje);
    scanf("%f", &a);

    a = validarFloat(a, min, max, mensaje);

    return a;
}

//Funcion para validar numeros con decimal + msj de error
float validarFloat(float numero, float min, float max, char mensaje[]){

        while(numero<min || numero>max)
    {
        printf("Error: Reingrese %s", mensaje);
        scanf("%f", &numero);
    }

    return numero;
}
