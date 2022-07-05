#include <bits/stdc++.h>
using namespace std;
int const mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
   int d1, m1, d2, m2, resp = 0;
   cin >> d1 >> m1 >> d2 >> m2;
   if (m1 == m2)
      cout << d2 - d1 << endl;
   else
   {
      while (m2-- > m1)
      {
         resp += mes[m2 - 1];
         // cout << mes[m2 - 1] << " " << resp << endl;
      }
      resp += d2 - d1;
      cout << resp << endl;
   }

   return 0;
}