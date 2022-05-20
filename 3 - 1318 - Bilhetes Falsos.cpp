#include <iostream>
using namespace std;
int main()
{
   int max, num, in;
   while (true)
   {

      cin >> max >> num;
      if (!max && !num)
         break;
      int vet[max], conta = 0;
      for (int i = 0; i < max; i++)
         vet[i] = 0;
      for (int i = 0; i < num; i++)
         cin >> in, vet[in - 1]++;
      for (int i = 0; i < max; i++)
         if (vet[i] > 1)
            conta++;
      cout << conta << endl;
   }
   return 0;
}