#include <iostream>

using namespace std;

int main()
{
   int casos, n, soma = 0;
   cin >> casos;
   for (int i = 0; i < casos; i++)
   {
      cin >> n, soma += (n / 3) * 3;
   }
   cout << soma << endl;
   return 0;
}