#include <stdio.h>
#include <string.h>
char voz[1001] = {0}, voz1[1001] = {0};
int main()
{
   int jon, medico;
   scanf("%s %s", voz, voz1);
   if (strlen(voz) > strlen(voz1) - 1)
      puts("go");
   else
      puts("no");
   return 0;
}