#include <stdio.h>
#include <math.h>
int main()
{
   int num, i, divisores, casos;
   scanf("%d", &casos);
   while (casos--)
   {
      divisores = 1;
      scanf("%d", &num);
      for (i = 2; i <= (int)sqrt(num); i++)
         if (num % i == 0)
            divisores++;
      if (divisores == 1 && num != 1)
         printf("%d eh primo\n", num);
      else
         printf("%d nao eh primo\n", num);
   }
   return 0;
}