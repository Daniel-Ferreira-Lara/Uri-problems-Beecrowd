#include <bits/stdc++.h>
using namespace std;
int main()
{
   float A, B;
   double C, D;
   char a = 'A', b = 'B', c = 'C', d = 'D';
   cin >> A >> B >> C >> D;
   printf("%c = %.6lf, %c = %.6lf\n", a, A, b, B);
   printf("%c = %.6lf, %c = %.6lf\n", c, C, d, D);

   printf("%c = %.1lf, %c = %.1lf\n", a, A, b, B);
   printf("%c = %.1lf, %c = %.1lf\n", c, C, d, D);

   printf("%c = %.2lf, %c = %.2lf\n", a, A, b, B);
   printf("%c = %.2lf, %c = %.2lf\n", c, C, d, D);

   printf("%c = %.3lf, %c = %.3lf\n", a, A, b, B);
   printf("%c = %.3lf, %c = %.3lf\n", c, C, d, D);

   printf("%c = %.3E, %c = %.3E\n", a, A, b, B);
   printf("%c = %.3E, %c = %.3E\n", c, C, d, D);

   printf("%c = %.0lf, %c = %.0lf\n", a, A, b, B);
   printf("%c = %.0lf, %c = %.0lf\n", c, C, d, D);
   return 0;
}