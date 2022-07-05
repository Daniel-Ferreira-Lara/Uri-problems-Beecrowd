#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b, q, r, negb = 0, nega = 0;
   cin >> a >> b;
   if (a >= 0)
      q = a / b, r = a % b;
   else
   {
      int x = 0, y = 0;
      (b < 0) ? negb = -1 : negb = 1;
      x = b * negb;
      for (r = 0; r < x; r++)
      {
         y = a - r;
         if (y % b == 0)
            break;
      }
      q = y / b;
   }
   cout << q << " " << r << endl;
   return 0;
}