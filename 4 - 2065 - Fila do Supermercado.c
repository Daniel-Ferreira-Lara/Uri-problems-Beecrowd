#include <stdio.h>
int main()
{
   int I, J, funcionario, cliente, index, z = 0;
   scanf("%d%d", &funcionario, &cliente);

   int time[funcionario], item[cliente], timeTotal[funcionario];
   for (I = 0; I < funcionario; I++)
      scanf("%d", &time[I]);
   for (I = 0; I < cliente; I++)
      scanf("%d", &item[I]);

   for (I = 0; I < cliente; I++)
   {
      if (I < funcionario)
         timeTotal[I] = time[I] * item[I];
      else
      {
         index = timeTotal[0];
         for (J = 0; J < funcionario; J++)
            if (index > timeTotal[J])
               index = timeTotal[J], z = J;
         timeTotal[z] += item[I] * time[z];
         z = 0;
      }
   }
   index = timeTotal[0];
   for (I = 0; I < funcionario; I++)
      if (index < timeTotal[I])
         index = timeTotal[I];
   printf("%d\n", index);
   return 0;
}