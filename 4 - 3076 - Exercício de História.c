#include <stdio.h>
int main()
{
   int num;
   while (scanf("%d", &num) != EOF)
   {
      if (num % 100 == 0)
         printf("%d\n", (num / 100));
      else
         printf("%d\n", (num / 100) + 1);
   }
   return 0;
}