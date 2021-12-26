#include <stdio.h>
int main()
{
   unsigned short int cursos, n;
   scanf("%hu", &cursos);
   n = cursos;
   char curso[cursos];
   while (cursos--)
      fgets(curso, n, stdin);
   puts("Ciencia da Computacao");
   return 0;
}