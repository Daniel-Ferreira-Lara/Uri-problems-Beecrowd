#include <stdio.h>
#include <string.h>
int main()
{
   char direction[4] = {'N', 'L', 'S', 'O'};
   int num, i, dir;
   while (scanf("%d", &num))
   {
      if (num == 0)
         break;
      char comandos[num];
      dir = 0;
      scanf("%s", comandos);

      for (i = 0; i < strlen(comandos); i++)
      {
         if (comandos[i] == 'D')
            if (dir == 3)
               dir = 0;
            else
               dir++;
         else if (comandos[i] == 'E')
            if (dir == 0)
               dir = 3;
            else
               dir--;
      }
      printf("%c\n", direction[dir]);
   }
   return 0;
}