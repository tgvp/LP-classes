#include <stdio.h>

int is_prime(unsigned x)
{
   unsigned i;

   if (x <= 1)
      return 0;
                
   for (i = 2 ; i < x ; i++)
      if (x % i == 0)
         return 0;

   return 1;
}


int main(void){
    unsigned x;
    
    printf("Digite um número: ");
    scanf("%u", &x);

    printf("Primo = %d\n", is_prime(x));
}