#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b;
   cin >> a >> b;
   if (a == b)
      cout << a << endl;
   else
      a > b ? cout << a << endl : cout << b << endl;

   return 0;
}