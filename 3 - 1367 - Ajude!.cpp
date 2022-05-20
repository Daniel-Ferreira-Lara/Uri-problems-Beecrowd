#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <string.h>
using namespace std;
#define grama 12

// int problems[27];
// bool submit[27];
int cor[26], in[26];
int main()
{

   int cases, tempoTot, certos, time;
   string str;
   char letra;
   while (cases)
   {
      cin >> cases;
      if (!cases)
         break;
      certos = 0, tempoTot = 0;
      // memset(submit, 0, sizeof(submit));
      // memset(problems, 0, sizeof(problems));
      memset(cor, 0, sizeof(cor));
      memset(in, 0, sizeof(in));
      while (cases--)
      {
         cin >> letra >> time >> str;
         /*if (str == "correct")
         {
            tempoTot += time, certos++;
            submit[letra - 'A'] = true;
            // cout << " Qtd acertos : " << certos << " Tempo total = " << tempoTot << endl;
         }
         else
            problems[letra - 'A']++;*/
         if (str == "correct" && !cor[letra - 'A'])
            cor[letra - 'A'] = time;
         if (str == "incorrect" && !cor[letra - 'A'])
            in[letra - 'A'] += 20;
      }
      for (int i = 0; i < 26; i++)
         // if (submit[i])
         //    tempoTot += 20 * problems[i];
         if (cor[i])
            certos++, tempoTot += (cor[i] + in[i]);
      cout << certos << " " << tempoTot << endl;
   }
   return 0;
}