#include<stdio.h>

int main()
{ // ambito de la variable VALOR
    int valor = 0;
    int lado = 0;

    // BUCLES en C

    // WHILE // MIENTRAS --> HACER
    // Primero chequeo condici�n de corte y luego ejecuto seg�n el c�digo dentro de mis {}
    /*while(valor){
        printf("HOLA WHILE\n");
        valor = 1;
    }

    // DO WHILE // HACER --> MIENTRAS
    // Primero ejecuto el c�digo de mi bloque y luego verifico la condici�n de corte
    do{
        printf("HOLA DO WHILE\n");
    }while(valor);*/

    // Ejercicio de tri�ngulo con lado > 0

    do{
        printf("Ingrese el lado, debe ser mayor que 0...: ");
        scanf("%i", &lado);
    }while(lado <= 0);


    // 1 1 2 3 5 8 13 21...


    return 0;
}
