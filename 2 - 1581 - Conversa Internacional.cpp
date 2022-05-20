#include <iostream>
#include <string>
using namespace std;

int main()
{

   unsigned short casos, numPessoas;
   bool ingles;
   string str, ant;
   cin >> casos;
   while (casos--)
   {
      cin >> numPessoas >> str;
      numPessoas--;
      ingles = false;
      ant = str;
      while (numPessoas--)
      {

         if (str != ant && ingles == false)
            ingles = true;
         else
            ant = str;

         cin >> str;
      }

      if (ingles)
         cout << "ingles\n";
      else
         cout << str << endl;

      ingles = false;
   }

   return 0;
}