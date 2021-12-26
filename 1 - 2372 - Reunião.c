#include <stdio.h>
#define INF 100000
int grafo[110][110];
inline int min(int, int);
int main(int argc, char **argv)
{
   int lin, col;
   int i, j, k, value;
   scanf("%d %d", &lin, &col);
   for (i = 0; i < lin; ++i)
      for (j = 0; j < lin; ++j)
         grafo[i][j] = INF;
   for (i = 0; i < lin; ++i)
      grafo[i][i] = 0;
   for (i = 0; i < col; ++i)
   {
      scanf("%d %d %d", &j, &k, &value);
      grafo[j][k] = grafo[k][j] = value;
   }
   for (i = 0; i < lin; ++i)
      for (j = 0; j < lin; ++j)
         for (k = 0; k < lin; ++k)
            grafo[j][k] = min(grafo[j][k], grafo[j][i] + grafo[i][k]);
   int menor = INF, maior = -1;
   for (i = 0; i < lin; ++i)
   {
      maior = -1;
      for (j = 0; j < lin; ++j)
         if (grafo[i][j] > maior && grafo[i][j] != INF)
            maior = grafo[i][j];
      if (menor > maior && maior > 0)
         menor = maior;
   }
   printf("%d\n", menor);
   return 0;
}
int min(int a, int b)
{
   return a < b ? a : b;
}