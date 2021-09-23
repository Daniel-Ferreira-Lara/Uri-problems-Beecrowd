#include <stdio.h>
int main()
{
   int hi, hf, minI, minF, sumi, sumf, hr, min;
   scanf("%d%d %d%d", &hi, &minI, &hf, &minF);
   if (hf <= hi && minF <= minI)
      hf += 24;
   else if (minF <= minI)
      minF += 60, hf -= 1;
   sumi = (hi * 3600) + (minI * 60);
   sumf = (hf * 3600) + (minF * 60);
   hr = (sumf - sumi) / 3600;
   min = ((sumf - sumi) - (hr * 3600)) / 60;
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
   return 0;
}