#include <stdio.h>
int main()
{
   long long int numLados, comprimento;
   while (scanf("%lld%lld", &numLados, &comprimento) != EOF)
      printf("%lld\n", numLados * comprimento);
   return 0;
}
//Já que o perímetro é a soma de todos os lados de um polígono e, todos os lados de um poligono regular são iguais, basta multiplicar a quantidade pelo tamanho