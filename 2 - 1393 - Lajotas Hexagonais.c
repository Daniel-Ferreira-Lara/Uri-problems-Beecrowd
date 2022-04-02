#include <stdio.h>
#include <math.h>
int main()
{
   unsigned short lajotas;
   float res, tot, repetido;
   while (scanf("%hu", &lajotas))
   {
      if (lajotas == 0)
         break;
      if (lajotas == 1)
         puts("1");
      else
         printf("%.0f\n", (1 / sqrt(5)) * pow(((1 + sqrt(5)) / 2), lajotas + 1) - (1 / sqrt(5)) * pow(((1 - sqrt(5)) / 2), lajotas + 1));
   }
   return 0;
}
