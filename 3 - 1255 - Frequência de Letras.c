#include <stdio.h>
#include <string.h>
int main()
{
   int num;
   unsigned int I, J, K, freq;
   char text[201], letras[26];
   scanf("%d", &num);
   getchar();
   for (I = 0; I < num; I++)
   {
      fgets(text, 201, stdin);
      for (J = 0; J < 26; J++)
         letras[J] = 0;
      for (J = 0; J < 26; J++)
         for (K = 0; K < strlen(text); K++)
            if (text[K] == 'a' + J || text[K] == 'A' + J)
               letras[J]++;
      freq = letras[0];
      for (J = 1; J < 26; J++)
         if (freq < letras[J])
            freq = letras[J];
      for (J = 0; J < 26; J++)
         if (letras[J] == freq)
            printf("%c", 'a' + J);
      puts("");
   }
   return 0;
}