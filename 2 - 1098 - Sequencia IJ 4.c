#include <stdio.h>
int main()
{
   int J, n = 0;
   float I = 0.0;
   for (I = 0.0; I < 2.2; I += 0.2)
   {
      for (J = 1; J < 4; J++)
         if (n % 5 == 0)
            printf("I=%.0f J=%.0f\n", I, I + J);
         else
            printf("I=%.1f J=%.1f\n", I, I + J);
      n++;
      if (n++ == 5)
         n = 0;
   }
   return 0;
}