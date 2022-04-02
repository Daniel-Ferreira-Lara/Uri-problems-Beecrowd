#include <stdio.h>
int main()
{
   unsigned short int A, B, C;
   while (scanf("%hu%hu%hu", &A, &B, &C) != EOF)
      if (A == 0 && B == 0 && C == 0 || A == 1 && B == 1 && C == 1)
         puts("*");
      else if (A == 1 && B == 0 && C == 0 || A == 0 && B == 1 && C == 1)
         puts("A");
      else if (A == 0 && B == 1 && C == 0 || A == 1 && B == 0 && C == 1)
         puts("B");
      else if (A == 0 && B == 0 && C == 1 || A == 1 && B == 1 && C == 0)
         puts("C");
   return 0;
}