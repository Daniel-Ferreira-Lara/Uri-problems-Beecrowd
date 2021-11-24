#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, n1, n2, p;

   while (cin >> n >> n1 >> n2 && n && n1 && n2)
   {
      p = cbrt(n * n1 * n2);
      cout << p << endl;
   }

   return 0;
}