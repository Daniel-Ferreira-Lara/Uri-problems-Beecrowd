#include <bits/stdc++.h>
using namespace std;
const int MAXN = 41;
const int ADD = 640000;
int V[MAXN];
int freq[2 * ADD + 1][2];
int NT, N, M, C, iteracao;
vector<int> p1, p2, positivo1, positivo2, negativo1, negativo2;
inline int checa(int val, int id)
{
   val += ADD;
   if (val < 0)
      return 0;
   return (freq[val][id] == iteracao);
}
void adiciona1(int pos, int val, int bitmask)
{
   if (pos == N)
   {
      freq[val + ADD][0] = iteracao;
      return;
   }
   adiciona1(pos + 1, val + p1[pos], bitmask | (1 << pos));
   adiciona1(pos + 1, val - p1[pos], bitmask);
}
void adiciona2(int pos, int val, int bitmask)
{
   if (pos == M)
   {
      freq[val + ADD][1] = iteracao;
      return;
   }
   adiciona2(pos + 1, val + p2[pos], bitmask | (1 << pos));
   adiciona2(pos + 1, val - p2[pos], bitmask);
}
void checa1(int pos, int val, int bitmask)
{
   if (pos == N)
   {
      if (!checa(C - val, 1))
         return;
      for (int i = 0; i < N; i++)
         if (bitmask & (1 << i))
            positivo1[i]++;
         else
            negativo1[i]++;
      return;
   }
   checa1(pos + 1, val + p1[pos], bitmask | (1 << pos));
   checa1(pos + 1, val - p1[pos], bitmask);
}
void checa2(int pos, int val, int bitmask)
{
   if (pos == M)
   {
      if (!checa(C - val, 0))
         return;
      for (int i = 0; i < M; i++)
         if (bitmask & (1 << i))
            positivo2[i]++;
         else
            negativo2[i]++;
      return;
   }
   checa2(pos + 1, val + p2[pos], bitmask | (1 << pos));
   checa2(pos + 1, val - p2[pos], bitmask);
}
void in(int n)
{
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      p2.push_back(x);
      positivo2.push_back(0);
      negativo2.push_back(0);
   }
}
void verifPrint(int x, vector<int> pos, vector<int> neg)
{
   for (int i = 0; i < x; i++)
      if (pos[i] && !neg[i])
         cout << "+";
      else if (!pos[i] && neg[i])
         cout << "-";
      else
         cout << "?";
}
int main()
{
   cin.tie();
   cout.tie(0);
   ios_base::sync_with_stdio(0);
   while (cin >> NT >> C && (NT || C))
   {
      iteracao++;
      p1.clear(), p2.clear();
      N = NT / 2;
      M = NT - N;
      positivo1.clear(), positivo2.clear(), negativo1.clear(), negativo2.clear();
      for (int i = 0; i < N; i++)
      {
         int x;
         cin >> x;
         p1.push_back(x), positivo1.push_back(0), negativo1.push_back(0);
      }
      for (int i = 0; i < M; i++)
      {
         int x;
         cin >> x;
         p2.push_back(x), positivo2.push_back(0), negativo2.push_back(0);
      }
      adiciona1(0, 0, 0);
      adiciona2(0, 0, 0);
      checa1(0, 0, 0);
      checa2(0, 0, 0);
      int flag = 0;
      for (int i = 0; i < N; i++)
         if (!positivo1[i] && !negativo1[i])
            flag = 1;
      for (int i = 0; i < M; i++)
         if (!positivo2[i] && !negativo2[i])
            flag = 1;
      if (flag)
      {
         cout << "*" << endl;
         continue;
      }
      verifPrint(N, positivo1, negativo1);
      verifPrint(M, positivo2, negativo2);
      cout << endl;
   }
   return 0;
}