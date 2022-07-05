#include <bits/stdc++.h>
using namespace std;
void reverseStr(string &str)
{
   int n = str.length();
   for (int i = 0; i < n / 2; i++)
      swap(str[i], str[n - i - 1]);
}
int main()
{
   string str, str1;
   int n;
   cin >> n;
   getchar();
   for (int i = 0; i < n; i++)
   {
      getline(cin, str);
      str1 = str.substr(0, str.length() / 2);
      reverseStr(str1);
      cout << str1;
      str1 = str.substr(str.length() / 2, str.length());
      reverseStr(str1);
      cout << str1 << endl;
   }
   return 0;
}