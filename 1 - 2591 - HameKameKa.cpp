#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, i, j;
   string str;
   cin >> n;
   while (n--)
   {
      cin >> str;
      i = 0;
      while (str[i++] != 'm')
         ;
      j = i;
      while (str[j++] != 'm')
         ;
      // cout << i << " " << j << endl;
      // cout << i - 2 << " " << (j - i - 3) << endl;
      cout << 'k';
      for (int k = 0; k < (j - i - 3) * (i - 2); k++)
         cout << 'a';
      cout << "\n";
   }
   return 0;
}