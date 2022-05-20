#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> vet;
void print()
{
   sort(vet.begin(), vet.end());
   for (int i = 0; i < vet.size(); i++)
      cout << "Package " << vet[i] << endl;
   cout << endl;
   vet.clear();
}
int main()
{
   bool start = false;
   string pac, str;
   while (cin >> pac)
   {
      if (pac == "1")
         start = true;
      else if (pac == "0")
         start = false, print();
      else
         cin >> str, vet.push_back(str);
   }
   return 0;
}