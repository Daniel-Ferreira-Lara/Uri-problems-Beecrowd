#include <stdio.h>
int main()
{
   float ant, atual;
   scanf("%f%f", &ant, &atual);
   printf("%.2f%%", ((atual / ant) - 1.0) * 100.00);
   return 0;
}