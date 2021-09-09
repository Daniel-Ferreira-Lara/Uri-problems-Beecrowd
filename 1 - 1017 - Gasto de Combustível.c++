#include <stdio.h>

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%.3f\n", float(a * b) / 12);

   return 0;
}