#include <bits/stdc++.h>
using namespace std;
int main()
{
   int par, j1, j2, roubo, acusou, aux = 0, parimpar;
   cin >> par >> j1 >> j2 >> roubo >> acusou;
   ((j1 + j2) % 2 == 0) ? parimpar = 0 : parimpar = 1;
   if (par == 1 && parimpar == 0 && roubo == 0 && acusou == 0)
      aux = 1;
   else if (par == 0 && parimpar == 1 && roubo == 0 && acusou == 0)
      aux = 1;
   else if (roubo == 1 && acusou == 0)
      aux = 1;
   else if (roubo == 1 && acusou == 1)
      aux = 2;
   else if (par == 1 && parimpar == 1 && roubo == 0 && acusou == 0)
      aux = 2;
   else if (par == 0 && parimpar == 0 && roubo == 0 && acusou == 0)
      aux = 2;
   else if (roubo == 0 && acusou == 1)
      aux = 1;
   aux == 1 ? cout << "Jogador 1 ganha!" << endl : cout << "Jogador 2 ganha!" << endl;

   return 0;
}