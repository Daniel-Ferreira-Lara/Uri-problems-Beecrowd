#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
   int i;
   if (n < 2)
      return false;
   for (i = 2; i <= sqrt(n); ++i)
      if (n % i == 0 && n != i)
         return false;
   return true;
}
int main()
{
   int n, p1, p2, i;
   scanf("%d", &n);
   if (n % 2 == 0)
      n--;
   for (i = n; i >= 5; i -= 2)
      if (isPrime(i))
         if (isPrime(i - 2))
         {
            p1 = i - 2;
            p2 = i;
            break;
         }
   printf("%d %d\n", p1, p2);
   return 0;
}