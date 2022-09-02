#include <iostream>
 
using namespace std;
long long int fat(int n){
    if(n > 1)
    return n * fat(n - 1);
  else
    return 1;
}
int main() {
 
    int n,m;
    while(cin>>n>>m)
        cout<<fat(n)+fat(m)<<endl;
 
    return 0;
}