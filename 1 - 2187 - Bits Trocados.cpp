#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, cases = 0, m[4];
   cin >> n;
   while (n)
   {
      cases++;
      m[0] = n / 50;
      n %= 50;
      m[1] = n / 10;
      n %= 10;
      m[2] = n / 5;
      n %= 5;
      m[3] = n;
      cout << "Teste " << cases << endl;
      cout << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << "\n\n";
      cin >> n;
   }
   return 0;
}