#include <iostream>
using namespace std;
int main()
{
   int n, c, saldo = 0;
   char t;
   cin >> n;
   while (n--)
   {
      cin >> t >> c;
      saldo += (t == 'V' ? c : -c);
   }
   if (saldo < 0)
      cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
   else
      cout << "A greve vai parar." << endl;
   return 0;
}