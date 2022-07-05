#include <stdio.h>
int mdc(int a, int b)
{
   if (a < 0)
      a = -a;
   if (b < 0)
      b = -b;
   if (a % b == 0)
      return b;
   else
      return mdc(b, a % b);
}
int main()
{
   int num1, num2, I, index;
   scanf("%d", &index);
   for (I = 0; I < index; I++)
   {
      scanf("%d%d", &num1, &num2);
      printf("%d\n", mdc(num1, num2));
   }
   return 0;
}
int mdc(int num1, int num2)
{

   int resto;

   do
   {
      resto = num1 % num2;

      num1 = num2;
      num2 = resto;

   } while (resto != 0);

   return num1;
}
