#include <stdio.h>
int main()
{
   unsigned short int a, b;
   scanf("%hu %hu", &a, &b);
   if (a > b)
      puts("Eu odeio a professora!");
   else if (a <= b - 3)
      puts("Muito bem! Apresenta antes do Natal!");
   else
   {
      puts("Parece o trabalho do meu filho!");
      if (a + 2 < 24)
         puts("TCC Apresentado!");
      else
         puts("Fail! Entao eh nataaaaal!");
   }
   return 0;
}