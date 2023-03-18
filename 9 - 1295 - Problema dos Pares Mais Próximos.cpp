#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define N 10001
#define MAX 9999.99999
typedef struct stPoint
{
   double x, y;
} Point;
Point point[N];
int cmp(const Point &a, const Point &b)
{
   if (a.x != b.x)
      return a.x > b.x;
   else
      return a.y > b.y;
}
double min(double a, double b) { return (a < b) ? a : b; }
double Distance(Point &p1, Point &p2)
{
   double d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
   (d > MAX) ? d = MAX + 1.0 : 0;
   return d;
}
double Closest_Pair(long a, long b)
{
   long i, j, k;
   double d1, d2, d, xp;
   if (a == b)
      return MAX + 1.0;
   else if (b - a == 1)
      return Distance(point[b], point[a]);
   else
   {
      d1 = Closest_Pair(a, (a + b) / 2);
      d2 = Closest_Pair((a + b) / 2 + 1, b);
      d = min(d1, d2);
      j = (a + b) / 2;
      xp = point[j].x;
      while (xp - point[j].x < d && j >= a)
      {
         k = (a + b) / 2 + 1;
         while (xp - point[k].x < d && k <= b)
         {
            d1 = Distance(point[k++], point[j]);
            d = min(d, d1);
         }
         j--;
      }
      return d;
   }
}

int main()
{
   long i, n;
   double d;
   cin >> n;
   while (n)
   {
      for (i = 0; i < n; i++)
         cin >> point[i].x >> point[i].y;
      sort(point, point + n, cmp);
      d = Closest_Pair(0, n - 1);
      (d > MAX) ? printf("INFINITY\n") : printf("%.4lf\n", d);
      cin >> n;
   }
   return 0;
}
