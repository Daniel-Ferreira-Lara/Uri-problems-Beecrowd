#include <stdio.h>
int main()
{
   int casos;
   float v1, v2, v3;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%f%f%f", &v1, &v2, &v3);
      printf("%.1f\n", (2 * v1 + 3 * v2 + 5 * v3) / 10);
   }
   return 0;
}