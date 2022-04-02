#include <stdio.h>
int main()
{
   int saida, tempo, fuso, result;
   scanf("%d %d %d", &saida, &tempo, &fuso);
   result = saida + tempo + fuso;
   if (result == 24)
      result = 0;
   else if (result > 24)
      result -= 24;
   else if (result < 0)
      result += 24;
   printf("%d\n", result);
   return 0;
}