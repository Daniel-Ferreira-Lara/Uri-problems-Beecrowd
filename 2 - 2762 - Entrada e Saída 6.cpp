#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s, s1 = "";
   cin >> s;
   bool flag = false, flag2 = false;
   for (int i = 0, k = 0; i < s.length(); i++)
   {
      if (s[i] == '.')
         flag = true;
      else if (flag)
      {
         if (!((s[i] == '0') && flag2 == false))
            flag2 = true, cout << s[i];
      }
   }
   flag = false;
   for (int i = 0; i < s1.length(); i++)
   {
      if (!flag && s1[i] != '0')
         flag = true;
      if (flag)
         cout << s1[i];
   }
   cout << '.';
   for (int i = 0; i < s.length() + 1; i++)
   {
      if (s[i] == '.')
         break;
      else
         cout << s[i];
   }
   cout << "\n";
   return 0;
}