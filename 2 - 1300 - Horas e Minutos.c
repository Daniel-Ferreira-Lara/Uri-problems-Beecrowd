#include <stdio.h>

int main(int argc, char **argv)
{

   int n;
   while (scanf("%d", &n) != EOF)
      printf("%c\n", !(n % 6) ? 'Y' : 'N');

   return 0;
}