#include <stdio.h>
int main()
{
   int i, num, contador = 0;
   scanf("%d", &num);
   for (i = 0; i < 1000; i++)
   {
      printf("N[%d] = %d\n", i, contador++);
      if (contador == num)
         contador = 0;
   }
   return 0;
}