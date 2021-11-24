#include <stdio.h>
#include <stdbool.h>
int main()
{
   short unsigned int macho[5], femea[5], i;
   bool verif = false;
   for (i = 0; i < 5; i++)
      scanf("%hu", &macho[i]);
   for (i = 0; i < 5; i++)
      scanf("%hu", &femea[i]);
   for (i = 0; i < 5; i++)
      if (macho[i] == femea[i])
      {
         verif = true;
         break;
      }
   if (verif)
      puts("N");
   else
      puts("Y");
   return 0;
}