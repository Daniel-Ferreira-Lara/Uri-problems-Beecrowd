#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct
{
   long long sum;
   int indice;
} soma;
bool compare(soma &a, soma &b) { return a.sum > b.sum; }
int mat[10005][10005];
soma L[10005], C[10005];
int usos = 0;
soma maior(soma &a, soma &b) { return a.sum >= b.sum ? a : b; }
void seeSum(int lin, int col)
{
   for (int i = 0; i < lin; i++)
      cout << "[" << L[i].sum << "][" << L[i].indice << "]  ";
   cout << "\n";
   for (int i = 0; i < col; i++)
      cout << "[" << C[i].sum << "][" << C[i].indice << "]  ";
   cout << "\n\n\n";
}
void soma13(int lin, long long int &Soma)
{
   long long sum;
   for (int i = 0; i < lin; i++)
      sum = L[i].sum + C[0].sum + C[1].sum + C[2].sum - mat[i][0] - mat[i][1] - mat[i][2];
   sum > Soma ? Soma = sum : 0;
}
void soma31(int col, long long int &Soma)
{
   long long sum;
   for (int i = 0; i < col; i++)
      sum = C[i].sum + L[0].sum + L[1].sum + L[2].sum - mat[0][i] - mat[1][i] - mat[2][i];
   sum > Soma ? Soma = sum : 0;
}
void soma22(int lin, int col, long long int &Soma)
{
   long long sum;
   for (int i = 0; i < lin; i++)
   {
      for (int j = 1; j < lin - 1; j++)
      {
         for (int k = 0; k < col - 1; k++)
         {
            for (int l = 1; l < col; l++)
            {
               sum = L[i].sum + L[j].sum + C[k].sum + C[l].sum - mat[i][k] - mat[i][l] - mat[j][k] - mat[j][l];
               sum > Soma ? Soma = sum : 0;
            }
         }
      }
   }
}
int main()
{
   int lin, col, n;
   long long sL = 0, sC = 0, sA = 0, Soma = 0;
   memset(mat, 0, sizeof(mat));
   memset(L, 0, sizeof(L));
   memset(C, 0, sizeof(C));
   cin >> lin >> col;
   for (int i = 0; i < lin; i++)
   {
      L[i].indice = i;
      for (int j = 0; j < col; j++)
         cin >> mat[i][j], L[i].sum += mat[i][j], C[j].sum += mat[i][j];
   }
   for (int j = 0; j < col; j++)
      C[j].indice = j;
   seeSum(lin, col);
   // sort(L, L + lin, compare);
   // sort(C, C + col, compare);
   seeSum(lin, col);
   for (int i = 0; i < lin; i++)
   {
      for (int j = 0; j < col; j++)
         cout << mat[i][j] << " ";
      cout << "\n";
   }
   if (max(lin, col) < 5)
   {
      sort(L, L + lin, compare);
      sort(C, C + col, compare);
      for (int i = 0; i < lin; i++)
         Soma += L[i].sum;
      cout << Soma << endl;
   }
   else
   {
      /*soma a[8];
      for (int i = 0; i < 4; i++)
         a[i] = maior(L[i], C[i]), a[i].sum -= mat[L[i].indice][C[i].indice], a[i + 4] = C[i];
      sort(a, a + 4, compare);
      for (int i = 0; i < 4; i++)
         sL += L[i].sum, sC += C[i].sum, sA += a[i].sum;
      //sL > sC ? cout  << "LINHA " << sL << endl : cout  << "COLUNA " << sC << endl;
      sL > sC ? cout << sL << endl : cout<< sC << endl;
       cout /*<< "BOTH " */
      //<< sA << endl;
      soma22(lin, col, Soma);
      cout << "2lin 2col " << Soma << endl;
      sort(L, L + lin, compare);
      sort(C, C + col, compare);
      soma a[8];
      for (int i = 0; i < 4; i++)
         a[i] = maior(L[i], C[i]), a[i].sum -= mat[L[i].indice][C[i].indice], a[i + 4] = C[i];
      sort(a, a + 4, compare);
      for (int i = 0; i < 4; i++)
         sL += L[i].sum, sC += C[i].sum, sA += a[i].sum;
      // sL > sC ? cout  << "LINHA " << sL << endl : cout  << "COLUNA " << sC << endl;
      cout << "Linha ou coluna " << Soma << endl;
      sL > sC ? cout << sL << endl : cout << sC << endl;
      soma13(lin, Soma);
      cout << "1lin 3col " << Soma << endl;
      soma31(col, Soma);
      cout << "3lin 1col " << Soma << endl;
   }
   return 0;
}