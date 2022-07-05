#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   float b;
   char c;
   string d, esp = "        ";
   cin >> a >> b >> c;
   getline(cin, d);
   cout << setprecision(10) << a << b << c << d.substr(1, d.length() - 1) << endl;
   cout << setprecision(10) << a << esp << b << esp << c << esp << d.substr(1, d.length() - 1) << endl;
   // cout << fixed();
   cout << setprecision(10) << a << b << c << d.substr(1, 11) << endl;
   return 0;
}