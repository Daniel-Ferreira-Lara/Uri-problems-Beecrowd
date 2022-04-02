#include <stdio.h>

int main()
{
   int casos, num, i;
   scanf("%d", &casos);
   for (i = 1; i < casos + 1; i++)
   {
      scanf("%d", &num);
      printf("resposta %d: %d\n", i, num);
   }

   return 0;
}