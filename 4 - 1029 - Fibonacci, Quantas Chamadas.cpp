#include <iostream>

using namespace std;
int conta = 0;
int fibo(int n)
{
   conta++;
   if (!n || n == 1)
      return n;
   else
      return fibo(n - 1) + fibo(n - 2);
}
int main()
{

   int n, fib;
   cin >> n;
   while (n--)
   {
      cin >> fib;
      cout << "fib(" << fib << ") = " << conta - 1 << " calls = " << fibo(fib) << endl;
      conta = 0;
   }

   return 0;
}