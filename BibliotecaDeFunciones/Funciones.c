//Funcion para mostrar un numero float
float mostrarNumFloat(char mensaje[]){

    float a;//defino la variable que retorna la funcion
    printf("%s", mensaje);
    scanf("%f", &a);
    printf("El numero ingresado es: %f\n",a);//imprimo msj + la variable ingresada

    return a;
}

//Funcion para sumar dos numeros
float sumarFloat(float n1,float n2){

    float suma;//defino la variable que retorna la funcion
    suma = n1+n2;//operacion suma

    return suma;

}

//Funcion para restar dos numeros
float restarFloat(float n1,float n2){

    float resta;//defino la variable que retorna
    resta = n1-n2;

    return resta;

}

//Funcion para multiplicar dos numeros
float multiplicarFloat(float n1,float n2){

    float producto;//defino la variable que retorna
    producto = n1*n2;

    return producto;

}

float dividirFloat(float n1,float n2){

    float cociente;//defino la variable que retorna
    if(n2 != 0)
    {
            cociente = (float)n1/n2;
            return cociente;
    }
    else
    {
            printf("No se puede dividir entre cero ");
            return 0;
    }
    }//end if

//Funcion para calcular factorial
int calcularFactorial(int a){

    int factorial =1;
    int i;//esta es la variable de control (para controlar el for)
    for(i = a; i >= 1; i--){

        factorial = factorial*i;

    }
    return factorial;
}
