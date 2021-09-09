#include <stdio.h>
int main()
{
   long int unsigned a, b;
   while (scanf("%lu %lu", &a, &b) != EOF)
   {
      printf("%lu\n", a ^ b);
   }
   return 0;
}
//Metodo mais demorado
#include <stdio.h>
int main()
{
   long int unsigned a, b, c;
   int ta, tb, d;
   while (scanf("%lu %lu", &a, &b) != EOF)
   {
      c = 0, ta = 0, tb = 0, d = 1;
      while (a != 0 || b != 0)
      {
         ta = a % 2;
         a /= 2;
         tb = b % 2;
         b /= 2;
         if (ta + tb == 1)
            c += 1 * d;
         d *= 2;
      }
      printf("%lu\n", c);
   }
   return 0;
}