#include <stdio.h>

int main()
{
   int num, casos;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d", &num);
      if (num == 0)
         puts("NULL");
      else if (num % 2 == 0)
      {
         if (num > 0)
            puts("EVEN POSITIVE");
         else
            puts("EVEN NEGATIVE");
      }
      else
      {
         if (num > 0)
            puts("ODD POSITIVE");
         else
            puts("ODD NEGATIVE");
      }
   }
   return 0;
}