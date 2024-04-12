#include <stdio.h>

int main() {
    FILE *arquivo; // Declaração de um ponteiro FILE *

    // abre em modo leitura -> r
    arquivo = fopen("camisas_jogadores.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Indica falha
    }

    // print o conteúdo do arquivo
    char c;
    while ((c = fgetc(arquivo)) != EOF) {
        printf("%c", c);
    }

    // fechando o arquivo após o uso
    fclose(arquivo);

    return 0; // Indica sucesso
}