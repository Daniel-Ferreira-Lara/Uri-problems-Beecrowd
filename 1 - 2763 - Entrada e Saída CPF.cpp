#include <bits/stdc++.h>
using namespace std;
int main()
{
   char c;
   for (int i = 0; i < 14; i++)
   {
      cin >> c;
      c == '.' || c == '-' ? cout << "\n" : cout << c;
   }
   cout << "\n";
   return 0;
}