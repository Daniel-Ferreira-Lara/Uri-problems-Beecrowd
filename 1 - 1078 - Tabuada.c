#include <stdio.h>
int main()
{
   int num, i;
   scanf("%d", &num);
   for (i = 1; i < 11; i++)
      printf("%d x %d = %d\n", i, num, (num * i));
   return 0;
}