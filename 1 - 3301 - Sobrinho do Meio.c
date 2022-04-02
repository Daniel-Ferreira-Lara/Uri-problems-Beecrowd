#include <stdio.h>
int main()
{
   int H, Z, L;
   scanf("%d %d %d", &H, &Z, &L);
   if (H > Z && H < L || H > L && H < Z)
      puts("huguinho");
   else if (Z > H && Z < L || Z > L && Z < H)
      puts("zezinho");
   else if (L > Z && L < H || L > H && L < Z)
      puts("luisinho");
   return 0;
}