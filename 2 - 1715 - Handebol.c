#include <stdio.h>
int main()
{
   int I, J, players, partidas, gol, aux, artilheiro = 0;
   scanf("%d%d", &players, &partidas);
   for (I = 0; I < players; I++)
   {
      gol = 0;
      for (J = 0; J < partidas; J++)
      {
         scanf("%d", &aux);
         if (aux > 0)
            gol++;
      }

      if (gol == partidas)
         artilheiro++;
   }
   printf("%d\n", artilheiro);
   return 0;
}