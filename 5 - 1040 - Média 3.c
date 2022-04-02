#include <stdio.h>
int main()
{
   int n = 4, I;
   float notas[4], media, extra, mediaF;
   for (I = 0; I < n; I++)
      scanf("%f", &notas[I]);
   media = (notas[0] * 2 + notas[1] * 3 + notas[2] * 4 + notas[3] * 1) / 10;
   printf("Media: %.1f\n", media);
   if (media < 5.0)
      puts("Aluno reprovado.");
   else if (media > 6.9)
      puts("Aluno aprovado.");
   else if (media <= 6.9)
   {
      puts("Aluno em exame.");
      scanf("%f", &extra);
      printf("Nota do exame: %.1f\n", extra);
      mediaF = (extra + media) / 2;
      if (mediaF >= 5.0)
         puts("Aluno aprovado.");
      else
         puts("Aluno reprovado.");
      printf("Media final: %.1f\n", mediaF);
   }
   return 0;
}