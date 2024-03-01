#include <stdio.h>

/* Scanf possui um retorno
    1: retorno sem erro
    0: erro
*/

void itens_lidos();

int main() {
    int num;
    
    printf("Informe um número inteiro: ");

    if (scanf("%d", &num) == 1) {
        printf("Número inteiro: %d\n", num);
    } else {
        printf("Entrada inválida!\n");
    }

    return 0;
}

void itens_lidos() {
    // scanf retorna a quantidade de itens lidos

    int num1, num2, num3;
    int quantidade_lidos;

    printf("Informe três números inteiros: ");
    quantidade_lidos = scanf("%d %d %d", &num1, &num2, &num3);
    
    // verifique o que acontece para as entradas:
    // 1 2 3
    // 1 2 a
    // 1 a 2

    printf("Quantidade de itens lidos: %d\n", quantidade_lidos);
    printf("Números lidos:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
}