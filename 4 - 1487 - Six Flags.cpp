#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct
{
   int time, pts;
   double score;
} brinquedo;
bool compara(brinquedo lhs, brinquedo rhs) { return lhs.score > rhs.score; }
int main()
{
   int n, t, instancia = 1;
   while (scanf("%d %d", &n, &t) == 2)
   {
      if (!(n == 0 && t == 0))
      {
         brinquedo vet[n];
         for (int i = 0; i < n; i++)
         {
            scanf("%d %d", &vet[i].time, &vet[i].pts);
            vet[i].score = (double)vet[i].pts / (double)vet[i].time;
         }
         sort(vet, vet + n, compara);
         int maxpts = -1;
         for (int i = 0; i < n; i++)
         {
            int j = i;
            int ptTotal = 0;
            int timelimit = t;
            while (timelimit > 0 && j < n)
            {
               if (timelimit >= vet[j].time)
               {
                  int x = timelimit / vet[j].time;
                  ptTotal += vet[j].pts * x;
                  timelimit -= (vet[j].time * x);
               }
               j++;
            }
            if (ptTotal > maxpts)
               maxpts = ptTotal;
         }
         cout << "Instancia " << instancia << endl
              << maxpts << endl
              << endl;
         instancia++;
      }
   }
   return 0;
}