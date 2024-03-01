#include <stdio.h>

int main() {
    
    // Expressões
    int exp1 = 5 && 6;
    int exp2 = 5 && 0;
    int exp3 = 5 > 2;
    int exp4 = 5 == 6;
    int exp5 = !5;
    int exp6 = !0;
    int exp7 = 5 + 3 - 2 || 1;
    int exp8 = 5 - 6 || 1;
    int exp9 = 5 + 7 || 0;
    int exp10 = 0 * 3 || 5 * 0;
    int exp11 = 0 || !0;

    printf("5 && 6: %d\n", exp1);
    printf("5 && 0: %d\n", exp2);
    printf("5 > 2: %d\n", exp3);
    printf("5 == 6: %d\n", exp4);
    printf("!5: %d\n", exp5);
    printf("!0: %d\n", exp6);
    printf("5+3-2 || 1: %d\n", exp7);
    printf("5-6 || 1: %d\n", exp8);
    printf("5+7 || 0: %d\n", exp9);
    printf("0*3 || 5*0: %d\n", exp10);
    printf("0 || !0: %d\n", exp11);

    return 0;
}
