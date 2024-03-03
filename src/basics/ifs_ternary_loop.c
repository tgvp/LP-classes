#include <stdio.h>

void obter_maior_ifs(int num1, int num2, int num3);
void obter_maior_ternary(int num1, int num2, int num3);
void maior_loop();


int main(void) {
    int num1, num2, num3;
    int opcao;
    int maior;

    // menu de opções
    do {
        printf("---------------------------------------\n");
        printf("1 - Obter o maior número com ifs\n");
        printf("2 - Obter o maior número com ternário\n");
        printf("3 - Obter o maior número com loop\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");

        while (scanf("%d", &opcao) != 1 || (opcao < 0 || opcao > 3)) {
            printf("Opção inválida!\nEscolha uma opção válida: ");
            while(getchar() != '\n'); // limpar buffer do teclado
        }

         switch (opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("Informe três números inteiros: ");
                if (scanf("%d %d %d", &num1, &num2, &num3) == 3) {
                    obter_maior_ifs(num1, num2, num3);
                }
                else {
                    printf("Entrada inválida!\n");
                }
                break;
            case 2:
                printf("Informe três números inteiros: ");
                if (scanf("%d %d %d", &num1, &num2, &num3) == 3) {
                    obter_maior_ternary(num1, num2, num3);
                }
                else {
                    printf("Entrada inválida!\n");
                }
                break;
            case 3:
                maior_loop();
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}

void obter_maior_ifs(int num1, int num2, int num3) {
    int maior;
           
    if (num1 > num2)
    {
        if (num1 > num3)
            maior = num1;
        else
            maior = num3;
    }
    else
    {
        if (num2 > num3)
            maior = num2;
        else
            maior = num3;
    }
    
    printf("O maior número é: %d\n", maior);
}

void obter_maior_ternary(int num1, int num2, int num3) {
    int maior;
    
    maior = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    
    printf("(Ternário) O maior número é: %d\n", maior);
}

void maior_loop() {
    int i, num1, num2, num3;
    int maior;
    int vetor[5] = {1, 2, 4, 7, 6};

    // do while
    maior = vetor[0];
    i = 0;
    do {
        if (vetor[0] > maior)
            maior = vetor[i];
        i++;
    } while (i < 5);
    
    // while
    maior = vetor[0];
    i = 0;
    while (i < 5) {
        if (vetor[i] > maior)
            maior = vetor[i];
        i++;
    }

    // for
    maior = vetor[0];
    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    for (i = 0; i < 5; i++) {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    printf("O maior número do array é: %d\n", maior);
}