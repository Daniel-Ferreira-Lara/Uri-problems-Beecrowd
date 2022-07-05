#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x, z = 0, i, cont = 1;
   cin >> x;
   while (z <= x)
      cin >> z;
   int soma = x;
   while (soma <= z)
   {
      ++x;
      soma += x, cont++;
   }
   cout << cont << endl;
}