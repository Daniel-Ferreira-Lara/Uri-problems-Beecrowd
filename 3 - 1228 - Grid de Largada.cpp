#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, orig[24], chega[24], final[24];
   while (cin >> n)
   {
      memset(orig, 0, sizeof(orig)), memset(chega, 0, sizeof(chega)), memset(final, 0, sizeof(final));
      for (int i = 0; i < n; i++)
         cin >> orig[i];
      for (int i = 0; i < n; i++)
         cin >> chega[i];

      for (int i = 0; i < n; ++i)
         for (int j = 0; j < n; ++j)
            if (orig[i] == chega[j])
            {
               final[j] = i + 1;
               break;
            }
      int ultra = 0;
      for (int i = 0; i < n; ++i)
         for (int j = i + 1; j < n; ++j)
            if (final[i] > final[j])
            {
               final[j] ^= final[i];
               final[i] ^= final[j];
               final[j] ^= final[i];
               ++ultra;
            }
      cout << ultra << endl;
   }
   return 0;
}