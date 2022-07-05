#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
bool compareM(int &a, int &b) { return a > b; }
bool comparem(int &a, int &b) { return a < b; }
vector<int> par, impar;
int main()
{
   int n, x;
   cin >> n;
   while (n--)
   {
      cin >> x;
      (x % 2) ? impar.push_back(x) : par.push_back(x);
   }
   sort(par.begin(), par.end(), comparem);
   sort(impar.begin(), impar.end(), compareM);
   for (int i = 0; i < par.size(); i++)
      cout << par[i] << endl;
   for (int i = 0; i < impar.size(); i++)
      cout << impar[i] << endl;
   return 0;
}