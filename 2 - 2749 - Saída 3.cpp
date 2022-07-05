#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n = 7;
   string s[n];
   s[0] = "---------------------------------------";
   s[1] = "|x = 35                               |";
   s[2] = "|                                     |";
   s[3] = "|               x = 35                |";
   s[5] = "|                               x = 35|";
   // cout << s[2].length() << endl;
   s[6] = s[0];
   s[4] = s[2];
   for (int i = 0; i < n; i++)
      cout << s[i] << "\n";
   return 0;
}