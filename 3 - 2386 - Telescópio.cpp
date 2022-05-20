#include <iostream>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
   int a, cases, num, s = 0;
   long long int sum;
   cin >> a >> cases;
   while (cases--)
   {
      cin >> num;
      sum = a * num;
      if (sum >= 40000000)
         s++;
      else
         continue;
   }
   cout << s << endl;
   return 0;
}