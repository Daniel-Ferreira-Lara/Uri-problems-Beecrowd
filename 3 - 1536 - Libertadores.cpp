#include <iostream>
using namespace std;
int main()
{
   int n, a, b, A, B;
   char s;
   cin >> n;
   while (n--)
   {
      cin >> a >> s >> b;
      cin >> B >> s >> A;
      if (a + A > b + B)
         cout << "Time 1\n";
      else if (a + A < b + B)
         cout << "Time 2\n";
      else if (A < b)
         cout << "Time 2\n";
      else if (A > b)
         cout << "Time 1\n";
      else
         cout << "Penaltis\n";
   }
   return 0;
}