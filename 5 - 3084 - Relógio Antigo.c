#include <stdio.h>
int main()
{
   int h, min, hf, minf;
   while (scanf("%d %d", &h, &min) != EOF)
   {
      hf = (h * 12) / 360;
      minf = (min * 60) / 360;
      printf("%02d:%02d\n", hf, minf);
   }
   return 0;
}