#include <stdio.h>
int main()
{
   long long int a, b;
   while (scanf("%lld %lld", &a, &b))
   {
      if (a == 0 && b == 0)
         break;
      printf("%lld\n", 2 * a - b); //deduzi
   }
   return 0;
}