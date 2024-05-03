/**
 * Implemente um programa que contenha duas variáveis x e y do tipo int e float, ambas inicializadas com o valor 5. Declare também dois apontadores px e py, que apontam para x e y respetivamente.
 * Em seguida mostre o valor das variáveis e o seu endereço armazenado no respetivo apontador. Depois mostre o valor das mesmas variáveis incrementado em uma unidade.
 * Notas: Transforme os endereços num long int para melhor compreensão dos resultados.
*/

#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    // apontando para o endereço de memória do elemento do array
    int *ptr = arr + 2; // posição inicial 0 + 2 = 2 -> 30

    printf("Valor do elemento apotado do array: %d\n", *ptr);

    printf("%d", *(ptr + 1)); //elemento atual apontado + 1 -> 40
    
    return 0;
}