#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   string str;
   bool maiuscula = true, prim;
   while (getline(cin, str))
   {
      maiuscula = true, prim = true;
      for (int j = 0; j < str.size(); j++)
         if (str[j] != ' ')
            if (maiuscula)
            {
               if (str[j] > 'a' - 1)
                  str[j] -= 32;
               maiuscula = false;
            }
            else
            {
               if (str[j] < 'Z' + 1)
                  str[j] += 32;
               maiuscula = true;
            }
      cout << str << endl;
   }
   return 0;
}