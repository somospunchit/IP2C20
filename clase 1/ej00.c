#include<stdio.h>

int main()
{
    int count; // declaro una variable tipo int -> tamaño por el tipo de dato 2 a 4 bytes --> 1 byte tiene 8 bits --> 2^16
    //float dec; // decimal
    char letra; // caracter
    int suma = 0;
    int valor1 = 50;
    int valor2 = 24;

    suma = valor1 + valor2; // operador aritmetico + ... - ... * ... / ... % -> devuelve el resto entre dos valores
    printf("Suma: %i\n", suma);

    printf("Ingrese el valor1: ");
    scanf("%i", &valor1);

    printf("VALOR1: %i", valor1);

/*
    count = 0; // inicialice en 0
    letra = 'c';
    //dec = '3.92';
    printf("hola mundo");
    printf("\n");
    printf("%c",letra);
    printf("\n");
    printf("%i",count);
    printf("\n"); // alt + 92
    //printf("%d",dec);
*/
    return 0;
}
