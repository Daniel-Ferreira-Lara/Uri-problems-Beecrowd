#include <stdio.h>
int main()
{
   int lin, col;
   scanf("%d %d", &lin, &col);
   if ((lin % 2 == 0 && col % 2 == 0) || (lin % 2 && col % 2))
      puts("1");
   else
      puts("0");
   return 0;
}