#include <stdio.h>
#include <string.h>
int main()
{
   char number[20];
   int i, azar = 0;
   scanf("%s", number);
   for (i = 1; i < strlen(number); i++)
      if (number[i] == '3' && number[i - 1] == '1')
      {
         azar = 1;
         break;
      }
   if (azar == 1)
      printf("%s es de Mala Suerte\n", number);
   else
      printf("%s NO es de Mala Suerte\n", number);
   return 0;
}