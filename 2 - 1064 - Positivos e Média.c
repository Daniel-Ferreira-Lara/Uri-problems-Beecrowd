#include <stdio.h>
int main()
{
   float num[6], media = 0.00;
   int I, positivos = 0;
   for (I = 0; I < 6; I++)
   {
      scanf("%f", &num[I]);
      if (num[I] > 0)
         positivos++, media += num[I];
   }
   media /= (1.00 * positivos);
   printf("%d valores positivos\n%.1f\n", positivos, media);
   return 0;
}