#include <bits/stdc++.h>
using namespace std;
int main()
{
   char A, B, C;
   char a = 'A', b = 'B', c = 'C', d = 'D';
   cin >> A >> B >> C;
   printf("%c = %c, %c = %c, %c = %c\n", a, A, b, B, c, C);
   printf("%c = %c, %c = %c, %c = %c\n", a, B, b, C, c, A);
   printf("%c = %c, %c = %c, %c = %c\n", a, C, b, A, c, B);
   return 0;
}