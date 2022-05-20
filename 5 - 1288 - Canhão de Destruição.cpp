#include <iostream>
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
   int mat[55][105], n, m, damage, weigth, res, cases;
   cin >> cases;
   while (cases--)
   {
      cin >> n;
      for (int i = 0; i < n; i++)
         mat[i][0] = 0;
      for (int i = 0; i <= 100; i++)
         mat[0][i] = 0;
      for (int i = 1; i <= n; i++)
      {
         cin >> damage >> weigth;
         for (int j = 1; j <= 101; j++)
            if (j < weigth)
               mat[i][j] = mat[i - 1][j];
            else
               mat[i][j] = max(mat[i - 1][j], mat[i - 1][j - weigth] + damage);
      }
      cin >> m >> res;
      (mat[n][m] >= res) ? cout << "Missao completada com sucesso\n" : cout << "Falha na missao\n";
   }
}