#include <iostream>
using namespace std;
int vet[50040];
int sobe[50040], desce[50040];
int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> vet[i];
   sobe[0] = 1;
   for (int i = 1; i < n; i++)
   {
      if (vet[i] > sobe[i - 1])
         sobe[i] = sobe[i - 1] + 1;
      else
         sobe[i] = min(sobe[i - 1], vet[i]);
   }
   desce[n - 1] = 1;
   for (int i = n - 2; i >= 0; i--)
   {
      if (vet[i] > desce[i + 1])
         desce[i] = desce[i + 1] + 1;
      else
         desce[i] = min(desce[i + 1], vet[i]);
   }
   int resp = 0;
   for (int i = 0; i < n; i++)
      resp = max(resp, min(sobe[i], desce[i]));
   cout << resp << endl;
   return 0;
}