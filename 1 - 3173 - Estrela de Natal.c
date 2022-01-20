#include <stdio.h>
int main()
{
   int num = 0;
   int ano, mes, dia, total;
   ano = 2020, mes = 12, dia = 21, total = 0;
   scanf("%d", &num);
   total = num * 365 * 11.9;
   ano += total / 365;
   total %= 365;
   mes += total / 12;
   total %= 12;
   dia += total / 30;
   printf("Dias terrestres para %s = %d\nData terrestre para %s: %d-%d-%d\n", "Jupiter", total, "Jupiter", ano, mes, dia);
   ano = 2020, mes = 12, dia = 21, total = 0;
   total = num * 365 * 29.6;
   ano += total / 365;
   total %= 365;
   mes += total / 12;
   total %= 12;
   dia += total / 30;
   printf("Dias terrestres para %s = %d\nData terrestre para %s: %d-%d-%d\n", "Saturno", total, "Saturno", ano, mes, dia);
   return 0;
}