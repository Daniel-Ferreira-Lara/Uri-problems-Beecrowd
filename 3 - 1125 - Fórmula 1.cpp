#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
   int cases, gps, pilots, tipos, major;
   int pontos[105], ponto[105], grid[105][105];
   while (1)
   {
      cin >> gps >> pilots;
      if (!gps && !pilots)
         break;
      for (int i = 0; i < gps; ++i)
         for (int j = 0; j < pilots; ++j)
            cin >> grid[i][j];
      cin >> cases;
      while (cases--)
      {
         memset(ponto, 0, sizeof(ponto));
         memset(pontos, 0, sizeof(pontos));
         cin >> tipos;
         for (int i = 0; i < tipos; ++i)
            cin >> pontos[i];

         for (int i = 0; i < gps; ++i)
            for (int j = 0; j < pilots; ++j)
               ponto[j] += pontos[grid[i][j] - 1];

         major = 0;
         for (int i = 0; i < pilots; ++i)
            if (ponto[i] > major)
               major = ponto[i];

         bool tst = true;
         for (int i = 0; i < pilots; ++i)
            if (ponto[i] == major)
            {
               if (tst)
                  cout << i + 1, tst = false;
               else
                  cout << " " << i + 1;
            }
         cout << endl;
      }
   }
   return 0;
}