#include <stdio.h>
int main()
{
   int son, daughter;
   while (scanf("%d%d", &son, &daughter))
   {
      if (son == 0 && daughter == 0)
         break;
      printf("%d\n", son + daughter);
   }
   return 0;
}