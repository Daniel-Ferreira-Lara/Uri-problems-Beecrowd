#include <iostream>
#include <cstring>
using namespace std;
char adj[4][3] = {{0, 2, 1}, {1, 0, 2}, {2, 1, 0}, {0, 0, 0}};
string str[5] = {"red", "green", "blue", "empate", "trempate"};
int rgb(char a)
{
   if (a == 'R')
      return 0;
   else if (a == 'G')
      return 1;
   else
      return 2;
}
int main()
{
   int cases, num;
   char a, b;
   int u, v;
   cin >> cases;
   while (cases--)
   {
      cin >> num;
      memset(&adj[3], 0, sizeof(adj[3]));
      while (num--)
      {
         cin >> a >> b;
         u = rgb(a), v = rgb(b);
         adj[3][u] += adj[u][v];
      }
      int maior = adj[3][0], cont = 0;
      for (int i = 1; i < 3; ++i)
         if (adj[3][i] > maior)
            maior = adj[3][i], cont = i;
         else if (adj[3][i] == maior)
            cont = cont == 3 ? 4 : 3;
      cout << str[cont] << endl;
   }
   return 0;
}