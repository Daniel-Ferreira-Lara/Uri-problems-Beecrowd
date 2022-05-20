#include <iostream>
using namespace std;
int main()
{
   int humanos, elfos, anoes, orcs, wargs, aguias, bem, mal;
   cin >> humanos >> elfos >> anoes >> orcs >> wargs >> aguias;
   bem = humanos + elfos + anoes;
   mal = orcs + wargs;
   if (bem > mal)
      cout << "Middle-earth is safe." << endl;
   else if (bem + aguias > mal)
      cout << "Middle-earth is safe." << endl;
   else
      cout << "Sauron has returned." << endl;
   return 0;
}