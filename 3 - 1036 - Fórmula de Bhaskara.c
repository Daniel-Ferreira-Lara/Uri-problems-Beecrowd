#include <stdio.h>
#include <math.h>
int main()
{
   double a, b, c, dt, r1, r2;
   scanf("%lf %lf %lf", &a, &b, &c);
   dt = (b * b) - (4 * a * c);

   if ((dt < 0) || (a == 0))
      printf("Impossivel calcular\n");
   else
   {
      r1 = ((-1 * b) + sqrt(dt)) / (2 * a);
      r2 = ((-1 * b) - sqrt(dt)) / (2 * a);
      printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
   }

   return 0;
}