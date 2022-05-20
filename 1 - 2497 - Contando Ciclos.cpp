#include <iostream>
using namespace std;
int main()
{
   int cases, ciclos = 0, experimentos = 0, estados = 0;
   cin >> cases;
   while (cases != -1)
   {
      while (cases--)
      {
         estados++;
         if (estados % 2 == 0)
            ciclos++;
      }
      experimentos++;
      cout << "Experiment " << experimentos << ": " << ciclos << " full cycle(s)" << endl;
      cin >> cases, ciclos = 0, estados = 0;
   }
   return 0;
}