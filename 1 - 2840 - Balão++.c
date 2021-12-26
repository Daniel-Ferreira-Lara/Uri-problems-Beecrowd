#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
   int vol, raio, litros, res = 0;
   scanf("%d %d", &raio, &litros);
   vol = ((4.0 / 3.0) * PI * raio * raio * raio);
   while (litros > 0)
      litros -= vol, res++;
   printf("%d\n", res - 1);
   return 0;
}