#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   bool mat[101][101 * (101 - 1) / 2];
   int reg, m, pontes;
   while (cin >> reg >> m)
   {
      pontes = m;
      int graph[reg], origem, fim;
      memset(graph, 0, sizeof graph);
      for (int i = 0; i < pontes; i++)
      {
         cin >> origem >> fim;
         graph[origem]++, graph[fim]++;
         origem--, fim--;
      }
      memset(mat, 0, sizeof mat);
      mat[reg][pontes] = 1;
      for (int i = reg - 1; i >= 0; i--)
         for (int j = 0; j <= pontes; j++)
         {
            mat[i][j] = mat[i + 1][j];
            if (j + graph[i] <= pontes)
               mat[i][j] = mat[i][j] || mat[i + 1][j + graph[i]];
         }
      if (mat[0][0])
         cout << "S" << endl;
      else
         cout << "N" << endl;
   }
   return 0;
}