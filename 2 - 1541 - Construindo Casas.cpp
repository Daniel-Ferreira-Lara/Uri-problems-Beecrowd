#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b, c, lado;
   cin >> a;
   while (a)
   {
      cin >> b >> c;
      lado = (int)sqrt(((a * b * 100) / c));
      cout << lado << endl;
      cin >> a;
   }
   return 0;
}