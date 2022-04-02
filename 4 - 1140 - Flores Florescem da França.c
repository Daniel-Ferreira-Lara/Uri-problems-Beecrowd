#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char msg[1050], first, verif;
   int i;
   fgets(msg, 1050, stdin);
   do
   {
      for (i = 0; i < strlen(msg); i++)
         msg[i] = tolower(msg[i]);
      first = msg[0];
      verif = 'Y';
      for (i = 0; i < strlen(msg); i++)
         if (msg[i] == ' ')
            if (first != msg[i + 1])
               verif = 'N';
            else if (verif != 'N')
               verif = 'Y';
      printf("%c\n", verif);

      fgets(msg, 1050, stdin);
   } while (msg[0] != '*' || msg[0] == ' ' || msg[i] == '	' || msg[i] == '  ');
   return 0;
}