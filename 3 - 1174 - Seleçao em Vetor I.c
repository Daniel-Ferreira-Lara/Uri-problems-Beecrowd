#include <stdio.h>
double number[100];
int main()
{
   int i;
   for (i = 0; i < 100; i++)
      scanf("%lf", &number[i]);
   for (i = 0; i < 100; i++)
      if (number[i] <= 10)
         printf("A[%d] = %.1lf\n", i, number[i]);
   return 0;
}