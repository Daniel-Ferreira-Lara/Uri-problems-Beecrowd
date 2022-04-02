#include <stdio.h>
#include <string.h>
int numeros[40001];
int num[40001];
int main(int argc, char *argv[])
{
   int casos, x;
   scanf("%d", &casos);
   memset(numeros, 0, 40001);
   for (x = 0; x < casos; x++)
   {
      scanf("%d", &num[x]);
      numeros[num[x]]++;
   }
   for (x = 0; x < 40001; x++)
      if (numeros[x] != 0)
         printf("%d aparece %d vez(es)\n", x, numeros[x]);
   return 0;
}