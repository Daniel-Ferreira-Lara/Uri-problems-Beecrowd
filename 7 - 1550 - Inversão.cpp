#include <bits/stdc++.h>
#define INF 11000
using namespace std;
int verif[INF];
typedef struct no
{
   int first, second;
} dupla;
int inverte(int aux)
{
   int num = 0;
   while (aux)
      num *= 10, num += aux % 10, aux /= 10;
   return num;
}
int bfs(int a, int b)
{
   memset(verif, 0, sizeof(verif));
   queue<dupla> fila;
   fila.push(dupla{a, 0});
   verif[a] = 1;
   while (!fila.empty())
   {
      int primeiro = fila.front().first, segundo = fila.front().second;
      fila.pop();
      int prox = primeiro + 1, inverso = inverte(primeiro);
      if (prox > INF || inverso > INF)
         continue;
      if (prox == b || inverso == b)
         return segundo + 1;
      else
      {
         if (!verif[prox])
            verif[prox] = 1, fila.push(dupla{prox, segundo + 1});
         if (!verif[inverso])
            verif[inverso] = 1, fila.push(dupla{inverso, segundo + 1});
      }
   }
}
int main()
{
   int n, a, b;
   cin >> n;
   while (n--)
      cin >> a >> b, cout << bfs(a, b) << endl;
}