#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m, atraso;
   char ch;
   while (cin >> n >> ch >> m)
   {
      n = (8 - n) * 60;
      m += 60;
      n > m ? atraso = 0 : atraso = m - n;
      cout << "Atraso maximo: " << atraso << endl;
   }
   return 0;
}