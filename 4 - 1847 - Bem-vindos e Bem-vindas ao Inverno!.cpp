#include <iostream>

using namespace std;
bool happy = false;
int main()
{

   int a, b, c;
   cin >> a >> b >> c;
   if (a > b)
      if (b <= c)
         happy = true;
      else if (b > c && ((b - c) < (a - b)))
         happy = true;
      else if (b > c && ((b - c) >= (a - b)))
         happy = false;
      else if (a < b)
         if (b < c && ((b - a) > (c - b)))
            happy = false;
         else if (b < c && ((b - a) <= (c - b)))
            happy = false;
         else if (b >= c)
            happy = true;
         else if (b < c)
            happy = true;
         else
            happy = false;
   happy ? cout << ":)\n" : cout << ":(\n";
   return 0;
}