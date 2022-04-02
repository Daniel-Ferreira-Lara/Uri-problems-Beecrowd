#include <stdio.h>
int main()
{
   double i, S = 0;
   for (i = 1; i < 101; i++)
      S += 1 / i;
   printf("%.2lf\n", S);
   return 0;
}