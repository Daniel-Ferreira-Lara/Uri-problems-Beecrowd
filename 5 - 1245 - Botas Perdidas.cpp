#include <bits/stdc++.h>
using namespace std;
typedef struct tipoCalcados
{
   int dir, esquerdo;
} tipoCalcados;

int main()
{
   tipoCalcados v[111];
   int N, i, j, res, pe, maior, menor;
   char lado;
   while (cin >> N)
   {
      res = maior = 0, menor = 1111;
      memset(v, 0, sizeof(v));
      for (i = 0; i < N; i++)
      {
         cin >> pe >> lado;
         if (pe > maior)
            maior = pe;
         if (pe < menor)
            menor = pe;
         (lado == 'E') ? v[pe].esquerdo++ : v[pe].dir++;
      }
      for (i = menor; i <= maior; i++)
      {
         if (v[i].esquerdo > 0 && v[i].dir > 0)
            (v[i].esquerdo >= v[i].dir) ? res += v[i].dir : res += v[i].esquerdo;
         cout << res << endl;
      }
   }
   return 0;
}