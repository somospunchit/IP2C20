#include <stdio.h> //print f y scan f
#include <stdbool.h> // booleanos

int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
int dividir(int, int);
int factorial(int);
int fibonacci(int);

int main(void) {

  int quiereSeguir = 1;
  int seguir;

  while (quiereSeguir == 1) {
    int valor1, valor2, resultado, operacion;
    printf("Ingrese el primer valor\n");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor\n");
    scanf("%i", &valor2);
    printf("Que operacion quiere realizar?\n");
    printf("1 - Suma\n");
    printf("2 - Resta\n");
    printf("3 - Multiplicacion\n");
    printf("4 - Division\n");
    printf("5 - Factorial\n");
    printf("6 - Fibonacci\n");
    //Pregunto qué operación quiere realizar.
    scanf("%i",&operacion);
    //Calculo el resultado.
    switch(operacion) {
      case 1:
        resultado = sumar(valor1,valor2);
        break;
      case 2:
        resultado = restar(valor1,valor2);
        break;
      case 3:
        resultado = multiplicar(valor1, valor2);
        break;
      case 4:
        resultado = dividir(valor1, valor2);
        break;
      case 5:
        resultado = factorial(valor1);
      case 6:
        resultado = fibonacci(valor1);
      default:
        break;
    }
    //Muestro el resultado.
    printf("El resultado de la operacion es %i\n", resultado);
    // Reviso si el usuario quiere seguir con otra operacion
    printf("Desea realizar otra operacion? 1:Si, 2:No\n");
    scanf("%i", &quiereSeguir);
  }
  return 0;
}
int sumar(int primerValor, int segundoValor){
  return primerValor + segundoValor;
}
int restar(int primerValor, int segundoValor) {
    return primerValor - segundoValor;
}
int multiplicar(int primerValor, int segundoValor) {
    return primerValor * segundoValor;
}
int dividir(int primerValor, int segundoValor) {
    return primerValor / segundoValor;
}
int factorial(int valor){
  if (valor == 1) {
    return 1;
  }
  else{
    return factorial(valor-1) * valor;
  }
};
int fibonacci(int valor){
  if (valor == 1) return 0;
  if (valor == 2) return 1;
  return fibonacci(valor - 2) + fibonacci(valor - 1);
};
/*
FACTORIAL:
5! = 1 * 2 * 3 * 4 * 5
4! = 1 * 2 * 3 * 4
      5! = 4! * 5
23! = 22! * 23
Fibonacci 5 -> 3
Fibonacci 6 -> 5
Fibonacci 7 -> 8
Fibonacci 7 = Fibonacci 5 + Fibonacci 6
fibonacci n = fibonacci n-2 + Fibonacci n-1
0 , 1 , 1  , 2 , 3 , 5 , 8 , 13 .
1. 2.   3.   4.  5.  6.  7.   8
*/
