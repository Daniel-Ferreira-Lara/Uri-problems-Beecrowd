#include <stdio.h>
int main()
{
   int senha;
   while (scanf("%d", &senha))
   {
      if (senha == 2002)
      {
         puts("Acesso Permitido");
         break;
      }
      else
         puts("Senha Invalida");
   }
   return 0;
}