#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
map<string, int> substr;
set<string> st;
string word[26];
int letra[26];
void init()
{
   memset(letra, 0, sizeof letra);
   for (int j = 0; j < 26; ++j)
      word[j] = "";
}
int main()
{
   string str, s2;
   stringstream ss;
   getline(cin, str);
   while (str != ".")
   {
      ss << str;
      int i = 0;
      while (ss >> s2)
         ++substr[s2];
      init();
      map<string, int>::iterator it;
      for (it = substr.begin(); it != substr.end(); ++it)
      {
         int tam = (it->first).size(), second = (it->second) * (tam - 2), first = it->first[0] - 'a';
         if (second > letra[first] && tam > 2)
            letra[first] = second, word[first] = it->first;
      }
      ss.clear();
      ss << str;
      int flag = 0;
      while (ss >> s2)
      {
         if (flag)
            cout << " ";
         if (word[s2[0] - 'a'] == s2)
            cout << s2[0] << '.', st.insert(s2);
         else
            cout << s2;
         flag = 1;
      }
      ss.clear();
      cout << "\n"
           << st.size() << endl;
      set<string>::iterator it2;
      for (it2 = st.begin(); it2 != st.end(); ++it2)
      {
         string aux2 = (*it2);
         cout << aux2[0] << ". = " << aux2 << endl;
      }
      substr.clear(), st.clear();
      getline(cin, str);
   }
}