#include <stdio.h>
int main()
{
   double num[6];
   int I, positivos = 0;
   scanf("%lf %lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
   for (I = 0; I < 6; I++)
      if (num[I] > 0)
         positivos++;
   printf("%d valores positivos\n", positivos);
   return 0;
}