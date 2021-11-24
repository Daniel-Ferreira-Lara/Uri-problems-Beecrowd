#include <stdio.h>

int main()
{
   unsigned short int n1, n2, cont[2] = {0}, casos, i;
   while (scanf("%hu", &casos))
   {
      if (casos == 0)
         break;
      cont[0] = 0, cont[1] = 0;
      while (casos--)
      {
         scanf("%hu %hu", &n1, &n2);
         if (n1 > n2)
            cont[0]++;
         if (n1 < n2)
            cont[1]++;
      }
      printf("%hu %hu\n", cont[0], cont[1]);
   }
   return 0;
}