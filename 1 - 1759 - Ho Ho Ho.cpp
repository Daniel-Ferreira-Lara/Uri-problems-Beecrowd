#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
      cout << "Ho", i == n - 1 ? cout << "!" << endl : cout << " ";
   return 0;
}