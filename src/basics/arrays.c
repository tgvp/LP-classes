#include <stdio.h>

int soma_dois_elementos(int a, int b){
    return a + b;
}

int soma_arrays(int arr[], int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++)
        soma += arr[i];
    return soma;
}

int main(void){

    int mat[10][10];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            printf("Posição [%d, %d] = %d\n", i, j, mat[i][j]);


    // como descobrir o tamanho de um array dinamicamente?
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int tamanho = sizeof(arr) / sizeof(arr[0]);

    // ou
    
    tamanho = sizeof(arr) / sizeof(int);

    printf("Tamanho do array: %d\n", tamanho);


    int a = 10, b = 20;

    printf("Soma de %d e %d: %d\n", a, b, soma_dois_elementos(a, b));

    // ou

    int resultado_soma = soma_dois_elementos(a, b);


    printf("Soma dos elementos do array: %d\n", soma_arrays(arr, tamanho));


    return 0;
}