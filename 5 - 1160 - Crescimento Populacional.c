#include <stdio.h>
int main()
{
   int time, city[2], casos;
   float growth[2];
   scanf("%d", &casos);
   while (casos--)
   {
      time = 0;
      scanf("%d %d %f %f", &city[0], &city[1], &growth[0], &growth[1]);
      while (city[0] <= city[1] && time < 102)
      {
         city[0] += (int)(city[0] * growth[0] / 100);
         city[1] += (int)(city[1] * growth[1] / 100);
         time++;
      }
      if (time > 100)
         puts("Mais de 1 seculo.");
      else
         printf("%d anos.\n", time);
   }
   return 0;
}