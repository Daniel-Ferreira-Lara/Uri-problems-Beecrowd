#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> vi;
bool vis[2005], adj[2005][2005];
int cruzamentos;
void dfs(int origem)
{
   vis[origem] = true;
   for (int i = 1; i <= cruzamentos; i++)
      if (adj[origem][i] && !vis[i])
         dfs(i);
}
int main()
{
   int ruas, origem, destino, mao;
   cin >> cruzamentos >> ruas;
   while (ruas && cruzamentos)
   {
      memset(adj, 0, sizeof(adj));
      for (int i = 0; i < ruas; ++i)
         cin >> origem >> destino >> mao, mao == 1 ? adj[origem][destino] = true : adj[origem][destino] = adj[destino][origem] = true;
      bool flag = false;
      for (int i = 1; i <= cruzamentos; ++i)
      {
         memset(vis, 0, sizeof(vis)), dfs(i);
         flag = false;
         for (int j = 1; j < cruzamentos && !flag; ++j)
            if (!vis[j])
               flag = true;
         if (flag)
            break;
      }
      flag ? cout << "0\n" : cout << "1\n";
      cin >> cruzamentos >> ruas;
   }
   return 0;
}