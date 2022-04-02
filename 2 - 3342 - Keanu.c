#include <stdio.h>
int main()
{
   unsigned short int num, branca = 0, preta = 0;
   scanf("%hu", &num);
   if (num % 2 == 0)
      printf("%d casas brancas e %d casas pretas\n", (num * num) / 2, (num * num) / 2);
   else
   {
      num--;
      branca += ((num * num) / 2) + num + 1;
      preta += ((num * num) / 2) + num;
      printf("%d casas brancas e %d casas pretas\n", branca, preta);
      //printf("%d casas brancas e %d casas pretas\n", ((num * num) / 2) + num + 1, ((num * num) / 2) + num);
   }
   return 0;
}