#include <stdio.h>
int main()
{
   int num, i = 1;
   scanf("%d", &num);
   while (i++)
   {
      if (i == 10000)
         break;
      if (i % num == 2)
         printf("%d\n", i);
   }
   return 0;
}