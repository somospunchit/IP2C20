#include <stdio.h>

/*
    Realizar un programa que acumule (sume) valores ingresados por teclado "hasta ingresar el 9999"
    (no sumar dicho valor, indica que ha finalizado la carga).
    Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.
*/

int main(){
    int acc = 0; // acumular la suma de los valores ingresados
    int valor = 0; // valor ingresado

    while(valor != 9999){
        printf("\nIngrese el valor a sumar: ");
        scanf("%i", &valor); // 9999
        if(valor != 9999){
            acc += valor; // acc = acc + valor;
        }
    }

    printf("Resultado de la suma: %i", acc);

    return 0;
}
