#include <stdio.h>
int main()
{
   int numero, i;
   scanf("%d", &numero);
   for (i = numero; i < numero + 12; i++)
      if (i % 2 != 0)
         printf("%d\n", i);
   return 0;
}