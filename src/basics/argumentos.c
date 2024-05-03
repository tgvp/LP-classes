#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Número de argumentos: %d\n", argc);

    if (argc < 2) {
        printf("Nenhum argumento passado\n");
        return 1;
    }

    // Imprime cada argumento
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    return 0;
}
