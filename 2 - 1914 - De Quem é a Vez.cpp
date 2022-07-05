#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, a, b;
   bool choose = 0;
   string p1, e1, p2, e2;
   cin >> n;
   while (n--)
   {
      cin >> p1 >> e1 >> p2 >> e2 >> a >> b;
      if ((e2 == "PAR" && !((a + b) % 2)) || (e2 == "IMPAR" && ((a + b) % 2)))
         cout << p2 << endl;
      else
         cout << p1 << endl;
   }
   return 0;
}