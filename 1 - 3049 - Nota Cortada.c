#include <stdio.h>
int main()
{
   int B, T, areamed = 5600; //11200/2=5600
   scanf("%d %d", &B, &T);
   int area = ((B + T) * 70) / 2;
   if (area == areamed)
      puts("0");
   else if (area > areamed)
      puts("1");
   else
      puts("2");
   return 0;
}