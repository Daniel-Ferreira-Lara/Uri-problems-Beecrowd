#include <bits/stdc++.h>
using namespace std;
int main()
{
   unsigned int maior = 0, n;
   cin >> n;
   while (n)
   {
      string str[n];
      // memset(str, 0, sizeof str);
      maior = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> str[i];
         if (str[i].size() > maior)
            maior = str[i].size();
      }
      for (int i = 0; i < n; i++)
      {
         // int dif = maior - str[i].size();
         // cout << i << " " << dif << endl;
         for (int j = 0; j < maior - str[i].size(); j++)
            cout << " ";
         cout << str[i] << endl;
      }
      cin >> n;
      n ? cout << endl : cout << "";
   }
   return 0;
}