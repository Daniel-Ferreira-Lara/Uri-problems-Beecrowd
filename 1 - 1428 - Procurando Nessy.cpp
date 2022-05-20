#include <iostream>
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
   int cases, lin, col, area;
   cin >> cases;
   while (cases--)
   {
      cin >> lin >> col;
      cout << (lin / 3) * (col / 3) << endl;
   }
   return 0;
}