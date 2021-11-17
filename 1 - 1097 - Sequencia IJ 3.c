#include <stdio.h>
int main()
{
   int I, J, N = 7;
   for (I = 1; I < 10; I += 2)
   {
      for (J = N; J > N - 3; J--)
         printf("I=%d J=%d\n", I, J);
      N += 2;
   }
   return 0;
}