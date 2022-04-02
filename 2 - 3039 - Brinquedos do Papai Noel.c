#include <stdio.h>
int main()
{
   char sex;
   int M = 0, F = 0, casos;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%*s %c", &sex);
      if (sex == 'F')
         F++;
      else
         M++;
   }
   printf("%d carrinhos\n%d bonecas\n", M, F);
   return 0;
}