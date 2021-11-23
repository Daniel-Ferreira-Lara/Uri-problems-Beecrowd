#include <stdio.h>
int main()
{
   int num1, num2;
   while (scanf("%d%d", &num1, &num2) == 2)
   {
      if (num1 > 0 && num2 > 0)
         puts("primeiro");
      else if (num1 < 0 && num2 > 0)
         puts("segundo");
      else if (num1 < 0 && num2 < 0)
         puts("terceiro");
      else if (num1 > 0 && num2 < 0)
         puts("quarto");
   }
   return 0;
}