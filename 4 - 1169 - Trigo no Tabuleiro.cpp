#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
using namespace std;
#define grama 12
int main()
{
   int cases;
   long long int n, grao;
   cin >> cases;
   while (cases--)
   {
      cin >> n;
      grao = pow(2, n) / grama;
      cout << grao / 1000 << " kg" << endl;
   }

   return 0;
}