#include <stdio.h>
#define PI 3.14159
int main()
{
   double r, vol;
   scanf("%lf", &r);
   vol = (4.0 / 3.0) * PI * r * r * r;
   printf("VOLUME = %.3lf\n", vol);
   return 0;
}