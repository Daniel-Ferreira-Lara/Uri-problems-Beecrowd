#include <stdio.h>
int somapar(int num)
{
   int sum, i;
   sum = num;
   for (i = num + 2; i < num + 9; i += 2)
      sum += i;
   printf("%d\n", sum);
}
int main()
{
   int num, i, sum;
   while (scanf("%d", &num))
      if (num == 0)
         break;
      else if (num % 2)
         num++, somapar(num);
      else
         somapar(num);
   return 0;
}