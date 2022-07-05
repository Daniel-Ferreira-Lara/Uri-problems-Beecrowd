#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, def;
   double value, total = 0;
   cin >> n;
   while (n--)
   {
      cin >> def >> value;
      def == 1001 ? value *= 1.5 : 0;
      def == 1002 ? value *= 2.5 : 0;
      def == 1003 ? value *= 3.5 : 0;
      def == 1004 ? value *= 4.5 : 0;
      def == 1005 ? value *= 5.5 : 0;
      total += value;
   }
   cout.setf(ios::fixed);
   cout << setprecision(2) << total << endl;
   return 0;
}