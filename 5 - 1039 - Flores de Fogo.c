#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double raio1, raio2, X1, X2, Y1, Y2, dist;
   while (scanf("%lf%lf%lf%lf%lf%lf", &raio1, &X1, &Y1, &raio2, &X2, &Y2) != EOF)
   {
      abs(raio1), abs(raio2), abs(X1), abs(X2), abs(Y1), abs(Y2);
      dist = pow(X2 - X1, 2) + pow(Y2 - Y1, 2);
      if (raio1 >= sqrt(dist) + raio2)
         printf("RICO\n");
      else
         printf("MORTO\n");
   }
   return 0;
}