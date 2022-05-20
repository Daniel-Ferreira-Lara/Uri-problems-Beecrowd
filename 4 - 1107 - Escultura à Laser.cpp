#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
   int height, length, num, numant, vezes;
   cin >> height >> length;
   while (height && length)
   {
      vezes = 0;
      for (int i = 0; i < length; i++)
      {
         cin >> num;
         if (i == 0)
            vezes += height - num;
         else if (num < numant)
            vezes += numant - num;
         numant = num;
      }
      cout << vezes << endl;
      cin >> height >> length;
   }
   return 0;
}