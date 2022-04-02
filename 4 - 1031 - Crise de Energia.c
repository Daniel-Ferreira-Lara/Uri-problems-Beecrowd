#include <stdio.h>
int restante(int n, int k)
{
   int ret = 0, I;
   for (I = 1; I < n; I++)
      ret = (ret + k) % I;
   return ret;
}
int main()
{
   int num, M;
   while (scanf("%d", &num) && num != 0)
   {
      M = 1;
      while (1)
         if (restante(num, M) != 11)
            M++;
         else
            break;
      printf("%d\n", M);
   }
   return 0;
}