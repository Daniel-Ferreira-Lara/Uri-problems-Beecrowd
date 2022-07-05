#include <bits/stdc++.h>
using namespace std;
int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char *romano[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
void convert(int n)
{
   int i = 0;
   while (n)
   {
      while (n / decimal[i])
         cout << romano[i], n -= decimal[i];
      ++i;
   }
}
int main()
{
   int n;
   cin >> n;
   convert(n);
   cout << endl;
   return 0;
}