#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int part[1005];
int findset(int i) { return (part[i] == i ? i : part[i] = findset(part[i])); }
bool same(int i, int j) { return findset(i) == findset(j); }
void une(int i, int j) { part[findset(i)] = findset(j); }
int main()
{
   int a, b, n, conta;
   while (1)
   {
      cin >> n;
      if (!n)
         return 0;
      conta = 1;
      for (int i = 0; i < 1005; ++i)
         part[i] = i;
      getchar();
      while (n--)
      {
         scanf("(%d,%d)", &a, &b);
         getchar();
         --a, --b;
         if (!same(a, b))
            une(a, b);
      }
      int set = findset(0);
      for (int i = 1; i < 1005; ++i)
         if (set == findset(i))
            ++conta;
      cout << conta << endl;
      memset(part, 0, sizeof(part));
   }
}