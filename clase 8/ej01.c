#include <stdio.h>

/*
    a) Dado un array de enteros devolver los valores únicos.
    b) Con el mismo array de arriba contar las repeticiones de los valores.
    {1,2,1,3,4,5,1,1,2,3,5,6,1,7,2,4,7,9,2,4,6,7,3,1,3,6,7,7,2}
*/

int main(){

    int arr[] = {1, 2, 1, 3, 4, 5, 1, 1, 2, 3, 5, 6, 1, 7, 2, 4, 7, 9, 2, 4, 6, 7, 3, 1, 3, 6, 7, 7, 2};
    int aux = arr[0];
    int cont = 0;

    // PARTE B: Hint!
    for(int x = 0; x < 29; x++){
        cont += aux == arr[x] ? 1 : 0;
        /*
            if(aux == arr[x]){
                cont++;
            }
        */
    }

    printf("Conteo %i, %i", arr[0], cont);


    return 0;
}
