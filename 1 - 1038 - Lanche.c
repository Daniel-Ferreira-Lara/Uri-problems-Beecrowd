#include <stdio.h>
float menu(int n, int qtd)
{
   if (n == 1)
      return qtd * 4.00;
   else if (n == 2)
      return qtd * 4.50;
   else if (n == 3)
      return qtd * 5.00;
   else if (n == 4)
      return qtd * 2.00;
   else if (n == 5)
      return qtd * 1.50;
}
int main()
{
   float result = 0;
   int item, qtd;
   scanf("%d%d", &item, &qtd);
   result = menu(item, qtd);
   printf("Total: R$ %.2f\n", result);
   return 0;
}
