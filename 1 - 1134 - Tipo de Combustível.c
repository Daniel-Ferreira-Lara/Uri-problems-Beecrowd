#include <stdio.h>
int main()
{
   int alc = 0, gas = 0, die = 0, value;
   while (scanf("%d", &value))
   {
      if (value == 4)
         break;
      else if (value == 1)
         alc++;
      else if (value == 2)
         gas++;
      else if (value == 3)
         die++;
   }
   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);
   return 0;
}