#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, number, menor, pos = 0;
   cin >> n >> menor;
   for (int i = 1; i < n; i++)
   {
      cin >> number;
      menor > number ? menor = number, pos = i : 0;
   }
   cout << "Menor valor: " << menor << "\nPosicao: " << pos << endl;
   return 0;
}