#include <stdio.h>
int main()
{
   long int n, n1 = 1, c = 0, i;
   scanf("%ld", &n);
   long int a[n];
   for (i = 0; i < n; i++)
   {
      scanf("%ld", &a[i]);
      if (a[i] >= n1)
         n1 = a[i] + 1;
   }
   printf("%ld\n", n1);
   return 0;
}