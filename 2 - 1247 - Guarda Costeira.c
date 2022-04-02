#include <stdio.h>
#include <math.h>
int main()
{
   double dist, TF, TG, D, VF, VG;
   while (scanf("%lf %lf %lf", &D, &VF, &VG) != EOF)
   {
      dist = sqrt(144 + D * D);
      TF = 12 / VF;
      TG = dist / VG;
      if (TG <= TF)
         puts("S");
      else
         puts("N");
   }
   return 0;
}