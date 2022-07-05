#include <bits/stdc++.h>
using namespace std;
int qtd = 1;
void seq(int n)
{
   int m = ((n + 1) * n) / 2 + 1;
   cout << "Caso " << qtd++ << ": " << m << (m == 1 ? " numero" : " numeros") << endl;
   cout << "0";
   for (int i = 1; i <= n; i++)
      for (int j = i; j; j--)
         cout << " " << i;
   cout << "\n\n";
}
int main()
{
   int n;
   while (cin >> n)
      seq(n);
   return 0;
}