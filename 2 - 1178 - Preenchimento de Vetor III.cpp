#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   double n;
   cin >> n;
   for (int i = 0; i < 100; i++)
      printf("N[%d] = %.4lf\n", i, n), n /= 2.0;
   return 0;
}