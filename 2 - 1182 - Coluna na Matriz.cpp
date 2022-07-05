#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   float resp = 0, aux;
   char select;
   cin >> n >> select;
   for (int i = 0; i < 12; i++)
      for (int j = 0; j < 12; j++)
      {
         cin >> aux;
         if (n == j)
            resp += aux;
      }
   if (select == 'M')
      resp /= 12;
   printf("%.1f\n", resp);
   // cout << resp << endl;
   return 0;
}