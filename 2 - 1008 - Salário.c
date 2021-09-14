#include <stdio.h>
int main()
{
   int n, h;
   double sal, hsal;
   scanf("%d %d %lf", &n, &h, &sal);
   sal *= h;
   printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, sal);

   return 0;
}