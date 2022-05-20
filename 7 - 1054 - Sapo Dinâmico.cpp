//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef struct no
{
   int F, S;
} dado;
dado data[105];
int main()
{
   int cases;
   cin >> cases;
   for (int t = 1; t <= cases; t++)
   {
      int n, d;
      cin >> n >> d;
      data[0] = {0, 0};
      data[n + 1] = {d, 0};
      for (int i = 1; i <= n; i++)
      {
         char c, hifen;
         int x;
         cin >> c >> hifen >> x;
         data[i] = {x, c == 'S'};
      }

      int resp = 0;
      int p = 0, c = 1;
      for (int i = 1; i <= n + 1; i++)
      {
         if (data[i].S == 0)
            resp = max(resp, abs(p - data[i].F)), p = data[i].F;
         else if (data[i].S == 1)
         {
            if (c)
               data[i].S = 2, resp = max(resp, abs(p - data[i].F)), p = data[i].F;
            c ^= 1;
         }
      }
      for (int i = n; i >= 0; i--)
         if (data[i].S <= 1)
            resp = max(resp, abs(p - data[i].F)), p = data[i].F;
      cout << "Case " << t << ": " << resp << endl;
   }
   return 0;
}