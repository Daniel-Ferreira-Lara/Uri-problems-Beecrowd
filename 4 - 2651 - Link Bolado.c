#include <stdio.h>
#include <string.h>
int main()
{
   char carta[100001] = {0};
   scanf("%s", carta);
   int i;
   for (i = 0; i < strlen(carta); i++)
      if (carta[i] >= 'A' && carta[i] <= 'Z')
         carta[i] += 32;
   if (strstr(carta, "zelda"))
      puts("Link Bolado");
   else
      puts("Link Tranquilo");
   return 0;
}