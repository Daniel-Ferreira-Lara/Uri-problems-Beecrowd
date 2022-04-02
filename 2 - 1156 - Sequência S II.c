#include <stdio.h>
int main()
{
   double i, j, S = 1;
   for (i = 3, j = 2; i < 40; i += 2, j *= 2)
      S += i / j;
   printf("%.2lf\n", S);
   return 0;
}