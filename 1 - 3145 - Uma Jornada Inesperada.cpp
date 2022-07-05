#include <bits/stdc++.h>
using namespace std;
int main()
{
   float n, m;
   cin >> n >> m;
   cout.setf(ios::fixed);
   cout << setprecision(2) << m / (n + 2) << endl;
   return 0;
}