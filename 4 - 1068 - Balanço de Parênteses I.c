#include <stdio.h>
int main()
{
   char exp[1001];
   int i, a, f;
   while (scanf("%s", &exp) != EOF)
   {
      a = 0;
      f = 0;
      for (i = 0; exp[i] != '\0'; i++)
      {
         if (exp[i] == '(')
            a++;
         else if (exp[i] == ')')
         {
            f++;
            if (a > 0)
               a--, f--;
         }
      }
      if (a == 0 && f == 0)
         printf("correct\n");
      else
         printf("incorrect\n");
   }
   return 0;
}