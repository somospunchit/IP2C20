#include<stdio.h>

    // 1 área de un cuadrado = L*L = L^2
    // 2 perímetro de un cuadrado = 4*L
    // 3 area de un triángulo = L^2 / 2

int main()
{
    // ej 2 - PERÍMETRO DE UN CUADRAD11O
    int res = 0;
    int lado = 0;

    lado = 19;

    // verificar si lado es positivo, xq?
    // Cuadrado hay una restricción -> lado > 0

    // Si el lado es mayor a 0 ejecutar bloque TRUE

    // SINO (else) ejecutar bloque FALSE
    prinf("Ingrese dato: ");
    scanf("%i", &lado);

    if(!(lado > 0) && lado != 1){ // operadores lógicos --> > || && !
        res = 4 * lado;
        printf("%i", res);
    } else {
        printf("ERROR LADO DEBE SER MAYOR QUE 0");
    }

    // if(lado > 0 && lado != 1)...

    // =SI(lado > 0,4*lado,"ERROR");

    return 0;
}

    // 1er paso ej 2
    // declarar e inicializar las variables
    // 2do paso
    // imprimir mensaje de ingreso de datos
    // 3ro
    // tomar por teclado el valor del LADO
    // 4to
    // calcular la respuesta
    // 5to
    // imprimir la respuesta
