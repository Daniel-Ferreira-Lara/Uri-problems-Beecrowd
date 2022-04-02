#include <stdio.h>
int main()
{
   double fast, slow, numVoltas;
   scanf("%lf %lf", &slow, &fast);
   numVoltas = fast - slow;
   numVoltas = fast / numVoltas;
   printf("%.0lf\n", ceil(numVoltas));
   return 0;
}