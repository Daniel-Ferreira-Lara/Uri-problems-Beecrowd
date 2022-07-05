#include <bits/stdc++.h>
using namespace std;
int main()
{
   unsigned short int tamanho, linha, coluna;
   int elemento;
   while (1)
   {
      cin >> tamanho;
      if (tamanho == 0)
         return 0;
      int matriz[tamanho][tamanho];
      elemento = 1;
      for (linha = 0; linha < tamanho; linha++)
      {
         for (coluna = 0; coluna < tamanho; coluna++)
            matriz[linha][coluna] = elemento, elemento *= 2;
         elemento = (matriz[linha][0]) * 2;
      }
      unsigned short int digitos = 0;
      int t;
      t = (matriz[tamanho - 1][tamanho - 1]);
      while (t > 0)
         t % 10, t /= 10, digitos++;
      for (linha = 0; linha < tamanho; linha++)
      {
         for (coluna = 0; coluna < tamanho; coluna++)
            (coluna == 0) ? printf("%*d", digitos, matriz[linha][coluna]) : printf(" %*d", digitos, matriz[linha][coluna]);
         printf("\n");
      }
      printf("\n");
   }
}