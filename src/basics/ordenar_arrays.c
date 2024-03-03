#include <stdio.h>

void bubble_sort(int vetor[], int tamanho_vetor) {
    int i, j;
    for (i = 0; i < tamanho_vetor-1; i++) {
        for (j = 0; j < tamanho_vetor-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                int temp;
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

void print_vetor(int vetor[], int tamanho_vetor) {
    int i;
    for (i = 0; i < tamanho_vetor; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90}; // declaração e inicialização do vetor
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]); // obtem o tamanho do array

    printf("Vetor original: \n");
    print_vetor(vetor, tamanho_vetor);
    
    // ordena
    bubble_sort(vetor, tamanho_vetor);
    
    printf("\nVetor ordenado: \n");
    print_vetor(vetor, tamanho_vetor);
    return 0;
}
