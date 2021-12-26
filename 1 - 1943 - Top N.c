#include <stdio.h>
int main()
{
   unsigned short num;
   scanf("%hu", &num);
   if (num < 2)
      puts("Top 1");
   else if (num < 4)
      puts("Top 3");
   else if (num < 6)
      puts("Top 5");
   else if (num < 11)
      puts("Top 10");
   else if (num < 26)
      puts("Top 25");
   else if (num < 51)
      puts("Top 50");
   else if (num < 101)
      puts("Top 100");
   return 0;
}