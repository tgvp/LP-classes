#include <stdio.h>

int main(void){

    int arr[] = {10, 20, 30, 40, 50};

    // apontando para o endereço de memória do elemento do array
    int *ptr = arr + 2; // posição inicial 0 + 2 = 2 -> 30

    printf("Conteúdo do elemento apontado do array (0+2): %d\n", *ptr);

    printf("Conteúdo de *(ptr+1): %d\n", *(ptr + 1)); //elemento atual apontado + 1 -> 40
    
    // apontadores para apontadores
    int **ptr2ptr = &ptr;

    // Imprime o conteúdo do ptr2ptr
    printf("Conteúdo do ptr2ptr: %d\n", **ptr2ptr);

    // Experimente o que acontece sem o parênteses
    (**ptr2ptr)++;

    // Imprime o conteúdo do ptr2ptr
    printf("Conteúdo do ptr2ptr após incremento: %d\n", **ptr2ptr);


    return 0;
}