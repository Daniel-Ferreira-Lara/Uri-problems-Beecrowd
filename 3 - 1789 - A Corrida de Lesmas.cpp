#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, major = 0, x;
   while (cin >> n)
   {
      major = 0;
      while (n--)
      {
         cin >> x;
         x > major ? major = x : 0;
      }
      (major < 10) ? cout << "1\n" : ((major < 20) ? cout << "2\n" : cout << "3\n");
   }
   return 0;
}