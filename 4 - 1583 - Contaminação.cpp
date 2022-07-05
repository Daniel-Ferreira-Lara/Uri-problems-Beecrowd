#include <bits/stdc++.h>
using namespace std;
#define MAX 55
const int increaseLin[] = {1, 0, -1, 0};
const int increaseCol[] = {0, 1, 0, -1};
int R, C;
char grid[MAX][MAX];
int floodfill(int lin, int col, char ini, char fim)
{
   if (lin < 0 || lin >= R || col < 0 || col >= C || grid[lin][col] != ini)
      return 0;
   int resp = 1;
   grid[lin][col] = fim;
   for (int d = 0; d < 4; d++)
      resp += floodfill(lin + increaseLin[d], col + increaseCol[d], 'A', 'T');
   return resp;
}

int main()
{
   char c;
   vector<pair<int, int>> positions;
   cin >> R >> C;
   while (R && C)
   {
      getchar();
      for (int i = 0; i < R; i++)
      {
         for (int j = 0; j < C; j++)
         {
            c = getchar();
            grid[i][j] = c;
            if (c == 'T')
               grid[i][j] = 'A', positions.push_back(make_pair(i, j));
         }
         getchar();
      }
      for (int i = 0; i < positions.size(); i++)
         floodfill(positions[i].first, positions[i].second, 'A', 'T');
      for (int i = 0; i < R; i++)
      {
         for (int j = 0; j < C; j++)
            cout << grid[i][j];
         cout << endl;
      }
      positions.clear();
      cout << endl;
      cin >> R >> C;
   }
   return 0;
}