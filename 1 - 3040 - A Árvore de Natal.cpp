#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, h, d, g;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> h >> d >> g;
      if (h > 199 && h < 301 && d > 49 && g > 149)
      {
         cout << "Sim" << endl;
         continue;
      }
      cout << "Nao" << endl;
   }
}