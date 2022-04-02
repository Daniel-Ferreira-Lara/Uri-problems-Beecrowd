#include <stdio.h>

int main()
{

   int mary, john, casos, num;
   while (1)
   {
      mary = 0, john = 0;
      scanf("%d", &casos);
      if (casos == 0)
         break;
      while (casos--)
      {
         scanf("%d", &num);
         if (num == 0)
            mary++;
         else
            john++;
      }
      printf("Mary won %d times and John won %d times\n", mary, john);
   }

   return 0;
}