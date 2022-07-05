#include <bits/stdc++.h>
#include <string>
using namespace std;
string ::iterator i1;
int main()
{
   string str, str2;
   int qtd = 0, last, caso = 0;
   while (cin >> str2 >> str)
   {
      caso++, qtd = 0, last = -1;
      for (int i = 0; i < str.length(); i++)
      {
         i1 = search(str.begin() + i, str.end(), str2.begin(), str2.end());
         // cout << i1 - str.begin() << endl;
         if (i1 - str.begin() < str.length())
            i = i1 - str.begin(), qtd++, last = i1 - str.begin();
      }
      if (last == -1)
         cout << "Caso #" << caso << ":\nNao existe subsequencia\n\n";
      else
         cout << "Caso #" << caso << ":\nQtd.Subsequencias: " << qtd << "\nPos: " << last + 1 << "\n\n";
   }
   return 0;
}