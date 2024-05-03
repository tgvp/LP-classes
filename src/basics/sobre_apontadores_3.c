#include <stdio.h>

int main(void){

    // apontadores para apontadores
    int valor = 10;

    // apontador para o endereço de memória da variável valor
    int *ptr = &valor;

    // apontador para o endereço de memória do ponteiro ptr
    int **ptr2ptr = &ptr;

    // Imprime o conteúdo da variável valor
    printf("Valor: %d\n", valor);

    // Imprime o conteúdo do ponteiro ptr
    printf("Conteúdo do ponteiro ptr: %d\n", *ptr);

    // Imprime o conteúdo do ponteiro ptr2ptr
    printf("Conteúdo do ponteiro ptr2ptr: %d\n", **ptr2ptr);

    // Imprime o conte+udo de *ptr2ptr
    printf("Conteúdo de *ptr2ptr: %p\n", *ptr2ptr);
    
    //Imprime o endereço de ptr
    printf("Endereço apontado por ptr: %p\n", ptr);

    // Imprime o endereço de memória de valor
    printf("Endereço de memória de valor: %p\n", &valor);


    
    return 0;
}