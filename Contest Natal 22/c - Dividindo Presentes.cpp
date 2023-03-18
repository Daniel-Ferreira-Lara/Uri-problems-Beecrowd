#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >> a >> b;
    if(a==b)cout<<"Sobraram 0 presentes!\n";
    else if (a<b) cout<<"Ainda faltam "<<fabs(a-b)<<" presentes!\n";
    else cout<<"Sobraram "<<fabs(a%b)<<" presentes!\n";
   return 0;
}