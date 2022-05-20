#include <stdio.h>
#include <string.h>
#define INF 9999
#define MAX 101
int vertices;
int D[MAX][MAX];
void floydWarshall(int grafo[][vertices])
{
   int i, j, k, maior;
   for (i = 0; i < vertices; i++)
      for (j = 0; j < vertices; j++)
         D[i][j] = grafo[i][j];
   for (k = 0; k < vertices; k++)
      for (i = 0; i < vertices; i++)
         for (j = 0; j < vertices; j++)
         {
            if (D[i][k] > D[k][j]) //DEVEMOS ENCONTRAR A MAIOR ARESTA DO MENOR CAMINHO
               maior = D[i][k];
            else
               maior = D[k][j];
            if (D[i][j] > maior)
               D[i][j] = maior;
         }
}

int main()
{
   //freopen("1454_in.txt", "r", stdin);
   //freopen("1454_out.txt", "w", stdout);
   int ruas, m = 0, i, j, h, k, cont = 1, origem, destino;
   scanf("%d %d", &vertices, &ruas);
   while (vertices != 0 && ruas != 0)
   {
      int grafo[vertices][vertices];
      for (i = 0; i < vertices; i++)
         for (j = 0; j < vertices; j++)
            grafo[i][j] = INF;
      m = 0;
      while (m < ruas)
      {
         scanf("%d %d %d", &i, &j, &h);
         grafo[i - 1][j - 1] = h;
         grafo[j - 1][i - 1] = h;
         m++;
      }
      for (i = 0; i < vertices; i++)
         grafo[i][i] = 0;

      floydWarshall(grafo);

      for (i = 0; i < vertices; i++)
         D[i][i] = 0;
      scanf("%d", &k);
      printf("Instancia %d\n", cont);
      while (k--)
      {
         scanf("%d %d", &origem, &destino);
         printf("%d\n", D[origem - 1][destino - 1]);
      }

      scanf("%d %d", &vertices, &ruas);
      cont++;

      printf("\n");
   }

   return 0;
}
