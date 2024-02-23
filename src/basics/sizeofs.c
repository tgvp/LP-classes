#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Tipo de dado       Tamanho (bytes)    Precisão (bits)    Valor mínimo          Valor máximo\n");
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("char               %d                     %d           %d                    %d\n", sizeof(char), CHAR_BIT, CHAR_MIN, CHAR_MAX);
    printf("signed char        %d                     %d           %d                    %d\n", sizeof(signed char), CHAR_BIT, SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char      %d                     %d            %d                      %d\n", sizeof(unsigned char), CHAR_BIT, 0, UCHAR_MAX);
    printf("short              %d                     %d          %d                  %d\n", sizeof(short), sizeof(short) * CHAR_BIT, SHRT_MIN, SHRT_MAX);
    printf("unsigned short     %d                     %d           %d                      %d\n", sizeof(unsigned short), sizeof(unsigned short) * CHAR_BIT, 0, USHRT_MAX);
    printf("int                %d                     %d          %d             %d\n", sizeof(int), sizeof(int) * CHAR_BIT, INT_MIN, INT_MAX);
    printf("unsigned int       %d                     %d           %d                      %u\n", sizeof(unsigned int), sizeof(unsigned int) * CHAR_BIT, 0, UINT_MAX);
    printf("long               %d                     %d          %ld    %ld\n", sizeof(long), sizeof(long) * CHAR_BIT, LONG_MIN, LONG_MAX);
    printf("unsigned long      %d                     %d           %d                      %lu\n", sizeof(unsigned long), sizeof(unsigned long) * CHAR_BIT, 0, ULONG_MAX);
    printf("long long          %d                     %d          %lld    %lld\n", sizeof(long long), sizeof(long long) * CHAR_BIT, LLONG_MIN, LLONG_MAX);
    printf("unsigned long long %d                     %d           %d                      %llu\n", sizeof(unsigned long long), sizeof(unsigned long long) * CHAR_BIT, 0, ULLONG_MAX);
    printf("float              %d                     %d           %e           %e\n", sizeof(float), FLT_MANT_DIG, FLT_MIN, FLT_MAX);
    printf("double             %d                     %d           %e          %e\n", sizeof(double), DBL_MANT_DIG, DBL_MIN, DBL_MAX);
    printf("long double        %d                    %d           %Le         %Le\n", sizeof(long double), LDBL_MANT_DIG, LDBL_MIN, LDBL_MAX);
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("Observações:\n");
    
    printf(" - O modificador 'unsigned' pode ser associado a todos os tipos de dados.\n");
    printf(" - Para os tipos de dados float, double , a precisão indica o número de dígitos significativos.\n");
    printf(" - Para o tipo de dado char, a precisão indica o número de bits necessários para representar cada caractere.\n");

    return 0;
}

