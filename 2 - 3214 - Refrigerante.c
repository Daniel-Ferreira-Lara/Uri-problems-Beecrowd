#include <stdio.h>
int main()
{
   int owner, found, buy, qtd = 0;
   scanf("%d %d %d", &owner, &found, &buy);
   int total = owner + found;
   while (total >= buy)
      total -= buy, total++, qtd++;
   printf("%d\n", qtd);
   return 0;
}