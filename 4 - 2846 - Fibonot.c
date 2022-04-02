#include <stdio.h>
int main()
{
   int num, I, J, K;
   long long int fibonacci[100100], fibonot[100100];
   scanf("%d", &num);

   fibonacci[0] = 0;
   fibonacci[1] = 1;
   for (I = 2; I <= 100100; ++I)
      fibonacci[I] = fibonacci[I - 1] + fibonacci[I - 2];
   J = 2, K = 1;
   for (I = 1; I <= 100100; ++I)
      if (fibonacci[J] != I)
      {
         fibonot[K] = I;
         K++;
      }
      else
         J++;
   printf("%lld\n", fibonot[num]);
   return 0;
}