#include <stdio.h>
int main()
{
   int num, maior = 0, pos, i;
   for (i = 1; i <= 100; i++)
   {
      scanf("%d", &num);
      if (num > maior)
         maior = num, pos = i;
   }
   printf("%d\n%d\n", maior, pos);
   return 0;
}