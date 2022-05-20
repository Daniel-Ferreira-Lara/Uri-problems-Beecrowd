#include <string.h>
#include <stdbool.h>
#include <stdio.h>
int main(int argc, char *argv)
{
   char string[281];
   while (~scanf("%[^\n]%*c", string))
      puts("Nao se refuta ciencia com opiniao");
   return 0;
}
