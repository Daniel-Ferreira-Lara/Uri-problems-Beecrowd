#include <stdio.h>
#include <stdbool.h>
int main()
{
   int anda, ini, fim, cima, baixo, moves = 0;
   bool possible = true;
   scanf("%d %d %d %d %d", &anda, &ini, &fim, &cima, &baixo);
   while (1)
   {
      if (cima == 0 || baixo == 0)
         possible = true;
      if (fim == ini)
         break;
      else if (fim > ini)
         ini += cima, moves++;
      else
         ini -= baixo, moves++;
   }
   if (possible == true)
      printf("%d\n", moves);
   else
      puts("use the stairs");
   return 0;
}