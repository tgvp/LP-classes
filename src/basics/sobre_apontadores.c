#include <stdio.h>

int main(void){

    // Declaração da variável valor do tipo inteiro
    int valor = 10;
    
    // Declaração e atribuição direta de um ponteiro para variável valor
    int *ptr = &valor;

    // outra forma de declarar um ponteiro e atribuir o endereço de memória da variável valor
    int *ptr;
    ptr = &valor;

    // Imprime o endereço de memória da variável valor
    printf("Endereço de memória: %p\n", &valor);

    // Imprime o valor da variável valor
    printf("Valor: %d\n", valor);

    // Imprime o endereço de memória para onde o ponteiro ptr aponta (endereço de memória da variável valor)
    printf("Para onde o ponteiro aponta: %p\n", ptr);

    // Imprime o valor do ponteiro ptr
    printf("Valor do ponteiro: %d\n", *ptr);

    // Endereço de memória do ponteiro
    printf("Endereço de memória do ponteiro: %p\n", &ptr);

}