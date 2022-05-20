#include <iostream>
using namespace std;
typedef struct
{
   int brinquedos;
   int peso;
} Bag;
int main()
{
   Bag saco[101];
   int i, j, cases, pac, peso, qtdSacos, mat[101][51];

   cin >> cases;
   while (cases--)
   {
      cin >> pac;
      for (i = 1; i <= pac; i++)
         cin >> saco[i].brinquedos >> saco[i].peso;

      for (i = 0; i <= pac; i++)
         for (j = 0; j <= 50; j++)
            if (!i || !j)
               mat[i][j] = 0;
            else if (saco[i].peso > j)
               mat[i][j] = mat[i - 1][j];
            else
               mat[i][j] = max(mat[i - 1][j - saco[i].peso] + saco[i].brinquedos, mat[i - 1][j]);
      j = 50, qtdSacos = 0, peso = 0;
      for (i = pac; i > 0; i--)
         if (mat[i][j] != mat[i - 1][j])
         {
            qtdSacos++;
            peso += saco[i].peso;
            if (j - saco[i].peso >= 0)
               j -= saco[i].peso;
         }
      cout << mat[pac][50] << " brinquedos\nPeso: " << peso << " kg\nsobra(m) " << pac - qtdSacos << " pacote(s)\n\n";
   }
   return 0;
}