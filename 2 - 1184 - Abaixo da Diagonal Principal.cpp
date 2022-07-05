#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, qtd = 0;
   double resp = 0, aux;
   char select;
   cin >> select;
   for (int i = 0; i < 12; i++)
      for (int j = 0; j < 12; j++)
      {
         cin >> aux;
         if (i > j)
            resp += aux, qtd++;
      }

   if (select == 'M')
      resp /= qtd;
   printf("%.1lf\n", resp);
   return 0;
}