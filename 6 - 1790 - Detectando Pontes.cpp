#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int qtd;
int low[60], father[60], num[60];
int bridges;
vector<vector<int>> AdjList;
void init(int n)
{
   memset(low, -1, sizeof low);
   memset(father, -1, sizeof father);
   memset(num, -1, sizeof num);
   qtd = bridges = 0;
   AdjList.assign(n, vector<int>());
}
void dfs(int u)
{
   low[u] = num[u] = qtd++;
   for (int j = 0; j < (int)AdjList[u].size(); j++)
   {
      int v = AdjList[u][j];
      if (num[v] == -1)
      {
         father[v] = u;
         dfs(v);
         if (low[v] > num[u])
            bridges++;
         low[u] = min(low[u], low[v]);
      }
      else if (v != father[u])
         low[u] = min(low[u], num[v]);
   }
}

int main()
{
   int cities, bridge;
   while (cin >> cities >> bridge)
   {
      init(cities);
      for (int i = 0; i < bridge; ++i)
      {
         int city1, city2;
         cin >> city1 >> city2;
         city1--, city2--;
         AdjList[city1].push_back(city2);
         AdjList[city2].push_back(city1);
      }
      dfs(0);
      cout << bridges << endl;
      AdjList.clear();
   }
   return 0;
}