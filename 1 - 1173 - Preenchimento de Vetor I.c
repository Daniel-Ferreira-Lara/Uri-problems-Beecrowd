#include <stdio.h>
int main()
{
   int a, v;
   scanf("%d", &v);
   for (a = 0; a <= 9; a++)
   {
      printf("N[%d] = %d\n", a, v);
      v *= 2;
   }
   return 0;
}