#include <stdio.h>
#include <math.h>
int main()
{
   char ini[3], fim[3];
   scanf("%s%s", ini, fim);
   int letra = fabs(ini[0] - fim[0]);
   int num = fabs(ini[1] - fim[1]);
   if (letra == 2 && num == 1 || letra == 1 && num == 2)
      puts("VALIDO");
   else
      puts("INVALIDO");
   return 0;
}