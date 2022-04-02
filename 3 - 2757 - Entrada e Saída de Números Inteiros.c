#include <stdio.h>
int main()
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   printf("A = %d, B = %d, C = %d\nA = %10d, B = %10d, C = %10d\nA = %010d, B = %010d, C = %010d\nA = %-10d, B = %-10d, C = %-10d\n", a, b, c, a, b, c, a, b, c, a, b, c);
   return 0;
}