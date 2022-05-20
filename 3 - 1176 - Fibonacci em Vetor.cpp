#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <string.h>
using namespace std;
long long int fibo[61];
int eco = 0;
long long int fiboRec(int n)
{
   long long int x;
   if (!n)
      return 0;
   if (fibo[n])
   {
      // cout << "Economia de : " << eco++ << endl;
      return fibo[n];
   }
   else
   {
      fibo[n] = x = fiboRec(n - 1) + fiboRec(n - 2);
      return x;
   }
}
int main()
{
   int n, cases;
   memset(fibo, 0, sizeof(fibo));
   fibo[0] = 0;
   fibo[1] = 1;
   fibo[2] = 1;
   cin >> cases;
   while (cases--)
   {
      eco = 0;
      cin >> n;
      cout << "Fib(" << n << ") = " << fiboRec(n) << endl;
   }
   return 0;
}