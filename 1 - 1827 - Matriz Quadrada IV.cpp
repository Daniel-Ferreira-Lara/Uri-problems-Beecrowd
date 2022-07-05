#include <bits/stdc++.h>
using namespace std;
void matrix(unsigned short tam)
{
   int m[tam][tam];
   unsigned short i, j;
   for (i = 0; i < tam; i++)
      for (j = 0; j < tam; j++)
         if (i == j)
            m[i][j] = 2;
         else
            (i == tam - j - 1) ? m[i][j] = 3 : m[i][j] = 0;
   unsigned short inicio = tam / 3;
   unsigned short fim = tam - inicio;
   for (i = inicio; i < fim; i++)
      for (j = inicio; j < fim; j++)
         m[i][j] = 1;
   m[tam / 2][tam / 2] = 4;
   for (i = 0; i < tam; i++)
   {
      for (j = 0; j < tam; j++)
         cout << m[i][j];
      cout << endl;
   }
   cout << endl;
}
int main()
{
   unsigned short tam;
   while (cin >> tam)
      matrix(tam);
}