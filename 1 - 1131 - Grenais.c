#include <stdio.h>
int main()
{

   int inter, gremio, i, continua;
   int vint = 0, vgre = 0, empate = 0;
   while (scanf("%d %d", &inter, &gremio))
   {
      if (gremio > inter)
         vgre++;
      else if (gremio < inter)
         vint++;
      else
         empate++;
      puts("Novo grenal (1-sim 2-nao)");
      scanf("%d", &continua);
      if (continua == 2)
         break;
   }
   if (vint > vgre)
      printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", empate + vint + vgre, vint, vgre, empate);
   else if (vgre > vint)
      printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", empate + vint + vgre, vint, vgre, empate);
   else
      printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNao houve vencedor\n", empate + vint + vgre, vint, vgre, empate);
   return 0;
}