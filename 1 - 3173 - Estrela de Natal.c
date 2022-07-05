#include <stdio.h>
typedef struct no
{
   int dia, mes, ano;
} year;
int main()
{
   year terra, jupter, saturno;
   int revolucoes = 0;
   int ano, mes, dia, total, bissextos;
   ano = 2020, mes = 12, dia = 21, total = 0;
   scanf("%d", &revolucoes);
   total = revolucoes * 365 * 11.9;
   ano += total / 365;
   total %= 365;
   mes += total / 12;
   total %= 12;
   dia += total / 30;
   printf("Dias terrestres para %s = %d\nData terrestre para %s: %d-%d-%d\n", "Jupiter", total, "Jupiter", ano, mes, dia);
   ano = 2020, mes = 12, dia = 21, total = 0;
   total = revolucoes * 365 * 29.6;
   ano += total / 365;
   total %= 365;
   mes += total / 12;
   total %= 12;
   dia += total / 30;
   printf("Dias terrestres para %s = %d\nData terrestre para %s: %d-%d-%d\n", "Saturno", total, "Saturno", ano, mes, dia);
   return 0;
}