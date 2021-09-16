#include <stdio.h>

int main()
{
   char nome[200];
   double dist, media = 0.0;
   int i = 0;
   while (scanf("%[^\n]%*c", nome) != EOF)
   {
      scanf("%lf ", &dist);
      media += dist;
      i++;
   }
   media /= i;
   printf("%.1lf\n", media);
   return 0;
}