#include <bits/stdc++.h>
using namespace std;
int mat[101][101];
int main()
{
   int n, value;
   bool sobe = false;
   cin >> n;
   while (n)
   {
      for (int i = 0; i < n; i++)
      {
         sobe = false;
         for (int j = 0, value = i + 1; j < n; j++)
         {
            mat[i][j] = value;
            value == 1 ? sobe = true : 0;
            sobe ? value++ : value--;
         }
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (j == 0)
               printf("%3hd", mat[i][j]);
            else
               printf(" %3hd", mat[i][j]);
         }
         cout << endl;
      }
      cout << endl;
      cin >> n;
   }
   return 0;
}