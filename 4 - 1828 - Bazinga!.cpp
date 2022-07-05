#include <bits/stdc++.h>
using namespace std;
/*string jogo(int n, string p1, string p2)//Com Strings
{
   int ganha[2], perde[2], aux = 0;
   if (p1 == p2)
      return "De novo!";
   else if (p1 == "pedra")
      p2 == "lagarto" || p2 == "tesoura" ? aux = 1 : (p2 == "papel" || p2 == "Spock" ? aux = 2 : aux = 0);
   else if (p1 == "papel")
      p2 == "pedra" || p2 == "Spock" ? aux = 1 : (p2 == "lagarto" || p2 == "tesoura" ? aux = 2 : aux = 0);
   else if (p1 == "tesoura")
      p2 == "papel" || p2 == "lagarto" ? aux = 1 : (p2 == "Spock" || p2 == "pedra" ? aux = 2 : aux = 0);
   else if (p1 == "lagarto")
      p2 == "papel" || p2 == "Spock" ? aux = 1 : (p2 == "pedra" || p2 == "tesoura" ? aux = 2 : aux = 0);
   else if (p1 == "Spock")
      p2 == "pedra" || p2 == "tesoura" ? aux = 1 : (p2 == "papel" || p2 == "lagarto" ? aux = 2 : aux = 0);
   if (aux == 1)
      return "Bazinga!";
   else if (aux == 2)
      return "Raj trapaceou!";
   else
      return "De novo!";
}*/
string const t[] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
string jogo(int n, string p1, string p2) // com Look up table
{
   int ganha[2], perde[2], aux = 0;
   if (p1 == p2)
      return "De novo!";
   else if (p1 == t[0])
      p2 == t[3] || p2 == t[2] ? aux = 1 : (p2 == t[1] || p2 == t[4] ? aux = 2 : aux = 0);
   else if (p1 == t[1])
      p2 == t[0] || p2 == t[4] ? aux = 1 : (p2 == t[3] || p2 == t[2] ? aux = 2 : aux = 0);
   else if (p1 == t[2])
      p2 == t[1] || p2 == t[3] ? aux = 1 : (p2 == t[4] || p2 == t[0] ? aux = 2 : aux = 0);
   else if (p1 == t[3])
      p2 == t[1] || p2 == t[4] ? aux = 1 : (p2 == t[0] || p2 == t[2] ? aux = 2 : aux = 0);
   else if (p1 == t[4])
      p2 == t[0] || p2 == t[2] ? aux = 1 : (p2 == t[1] || p2 == t[3] ? aux = 2 : aux = 0);
   if (aux == 1)
      return "Bazinga!";
   else if (aux == 2)
      return "Raj trapaceou!";
   else
      return "De novo!";
}
int main()
{
   int played = 1, n;
   string p1, p2;
   cin >> n;
   while (n--)
   {
      cin >> p1 >> p2;
      cout << "Caso #" << played << ": " << jogo(n, p1, p2) << endl;
      played++;
   }
   return 0;
}