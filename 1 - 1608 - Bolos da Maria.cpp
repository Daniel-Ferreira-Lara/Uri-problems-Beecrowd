#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
   int cases = 0, ingredients, types, in, qtd, q;
   long long int money;
   cin >> cases;
   while (cases--)
   {
      cin >> money >> ingredients >> types;
      int vet[ingredients], custo[types];
      memset(custo, 0, sizeof(custo));
      for (int i = 0; i < ingredients; i++)
         cin >> vet[i];
      for (int i = 0; i < types; i++)
      {
         cin >> q;
         for (int j = 0; j < q; j++)
            cin >> in >> qtd, custo[i] += vet[in] * qtd;
      }
      sort(custo, custo + types);
      cout << money / custo[0] << endl;
   }
   return 0;
}