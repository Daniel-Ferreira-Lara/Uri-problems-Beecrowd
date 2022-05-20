#include <iostream>
using namespace std;
int primos[3502] = {0};
bool isPrimo(int num)
{
   if (num == 2)
      return true;
   if (!(num & 1))
      return false;
   for (int i = 3; i * i <= num; i += 2)
      if (num % i == 0)
         return false;
   return true;
}
int main()
{
   int num, resp;
   for (int i = 2, j = 0; i < 32650; i++)
      if (isPrimo(i))
         primos[j++] = i;
   while (1)
   {
      cin >> num;
      if (!num)
         break;
      resp = 0;
      for (int k = 1; k <= num; k++)
         resp = (resp + primos[num - k]) % k;
      cout << ++resp << endl;
   }
   // cout << endl;
   return 0;
}