#include <string.h>
#include <stdio.h>
typedef struct no
{
   char name[101];
} string;
string crianca[1000];
void sort(int qtd)
{
   int i = 1, j;
   string aux;
   while (i < qtd)
   {
      j = i - 1;
      aux = crianca[i];
      while (j >= 0 && strcasecmp(crianca[j].name, aux.name) > 0)
         crianca[j + 1] = crianca[j], j--;
      crianca[j + 1] = aux, i++;
   }
}

int main()
{
   int i = 0;
   while (scanf(" %[^\n]", crianca[i].name) != EOF)
      i++;
   sort(i);
   printf("%s\n", crianca[i - 1].name);
   return 0;
}