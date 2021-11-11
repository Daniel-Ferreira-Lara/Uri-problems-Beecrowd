
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int busca(char op)
{
   if (op == '^')
      return 3;
   else if ((op == '*') || (op == '/'))
      return 2;
   else if ((op == '+') || (op == '-'))
      return 1;
   else
      return 0;
}
void ppos(const char *exp, char *out);
int main(void)
{
   int n;
   char in[1024], pos[1024];
   scanf("%d\n", &n);
   while (n-- > 0)
   {
      fgets(in, 1024, stdin);
      ppos(in, pos);
      printf("%s\n", pos);
   }
   return 0;
}
void ppos(const char *in, char *pos)
{
   char p[1024];
   int i, o = 0, t = -1;
   for (i = 0; in[i] != '\n' && in[i] != '\0'; i++)
   {
      if (in[i] == ' ')
         continue;
      if (in[i] == '(')
         p[++t] = in[i];
      else if (in[i] == ')')
      {
         while (t > -1 && p[t] != '(')
            pos[o++] = p[t--];
         t--;
      }
      else if ((in[i] >= '0' && in[i] <= '9') || (in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' && in[i] <= 'Z'))
         pos[o++] = in[i];
      else
      {
         while (t > -1 && p[t] != '(' && busca(p[t]) >= busca(in[i]))
            pos[o++] = p[t--];
         p[++t] = in[i];
      }
   }
   while (t > -1)
      pos[o++] = p[t--];
   pos[o++] = '\0';
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int busca(char op)
{
   if (op == '^')
      return 3;
   else if ((op == '*') || (op == '/'))
      return 2;
   else if ((op == '+') || (op == '-'))
      return 1;
   else
      return 0;
}
void ppos(const char *in, char *pos);
int main(void)
{
   int n;
   char in[1024], pos[1024];
   scanf("%d\n", &n);
   while (n > 0)
   {
      n--;
      fgets(in, 1024, stdin);
      ppos(in, pos);
      printf("%s\n", pos);
   }
   return 0;
}
void ppos(const char *in, char *pos)
{
   char p[1024];
   int i, o = 0, t = -1;
   for (i = 0; in[i] != '\n' && in[i] != '\0'; i++)
   {
      if (in[i] == ' ')
         continue;
      if (in[i] == '(')
         p[++t] = in[i];
      else if (in[i] == ')')
      {
         while (t > -1 && p[t] != '(')
            pos[o++] = p[t--];
         t--;
      }
      else if ((in[i] >= '0' && in[i] <= '9') || (in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' && in[i] <= 'Z'))
         pos[o++] = in[i];
      else
      {
         while (t > -1 && p[t] != '(' && busca(p[t]) >= busca(in[i]))
            pos[o++] = p[t--];
         p[++t] = in[i];
      }
   }
   while (t > -1)
      pos[o++] = p[t--];
   pos[o++] = '\0';
}