#include <bits/stdc++.h>
using namespace std;
set<string> tree;
int main()
{
   string s;
   while (cin >> s)
      tree.insert(s);
   cout << tree.size() << endl;
   return 0;
}