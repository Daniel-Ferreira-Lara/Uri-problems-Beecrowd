#include <stdio.h>
int main()
{
   int num, J;
   while (scanf("%d", &num) > 0)
   {
      if (num != 0)
      {
         printf("1");
         for (J = 2; J * J <= num; J++)
            printf(" %d", J * J);
         printf("\n");
      }
      else
         break;
   }
   return 0;
}