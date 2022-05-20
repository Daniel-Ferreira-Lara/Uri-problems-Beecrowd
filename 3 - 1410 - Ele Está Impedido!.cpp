#include <iostream>
using namespace std;
int main()
{
   int at, df, aux, n;
   while (1)
   {
      cin >> at >> df;
      if (at == 0 && df == 0)
         break;
      int atack[at], defense[df];
      for (int i = 0; i < at; i++)
         cin >> atack[i];
      for (int i = 0; i < df; i++)
         cin >> defense[i];

      for (int i = 0, n = 1; i < at; i++)
      {
         for (int j = n; j < at; j++)
            if (atack[i] > atack[j])
               aux = atack[i], atack[i] = atack[j], atack[j] = aux;
         n++;
      }
      for (int i = 0, n = 1; i < df; i++)
      {
         for (int j = n; j < df; j++)
            if (defense[i] > defense[j])
               aux = defense[i], defense[i] = defense[j], defense[j] = aux;
         n++;
      }
      if (atack[0] < defense[0] || atack[0] < defense[1])
         cout << "Y\n";
      else
         cout << "N\n";
   }
   return 0;
}