#include <stdio.h>
int main()
{
   float a, b;
   scanf("%f%f", &a, &b);
   if ((a == 0.0) && (b == 0.0))
      puts("Origem"); //printf("%s\n", "Origem");
   else if (a == 0.0 && b != 0.0)
      puts("Eixo Y"); //printf("Eixo Y\n");
   else if (b == 0.0 && a != 0.0)
      puts("Eixo X"); //printf("Eixo X\n");
   else if ((a > 0.0) && (b > 0.0))
      puts("Q1"); //printf("%s\n", "Q1");
   else if ((a < 0.0) && (b > 0.0))
      puts("Q2"); //printf("%s\n", "Q2");
   else if ((a < 0.0) && (b < 0.0))
      puts("Q3"); //printf("%s\n", "Q3");
   else if ((a > 0.0) && (b < 0.0))
      puts("Q4"); //printf("%s\n", "Q4");
   return 0;
}