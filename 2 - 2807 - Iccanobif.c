#include <stdio.h>
int main()
{
   int N, i;
   long long int fibo[100] = {0};
   fibo[0] = 1;
   fibo[1] = 1;
   scanf("%d", &N);
   for (i = 2; i < N; i++)
      fibo[i] = fibo[i - 1] + fibo[i - 2];
   for (i = N - 1; i > 0; --i)
      printf("%lld ", fibo[i]);
   printf("%lld\n", fibo[i]);
   return 0;
}