#include <bits/stdc++.h>
using namespace std;
map<string,string> m;
void init(){
    m.insert(pair<string, string>("brasil","Feliz Natal!"));
    m.insert(pair<string, string>("alemanha","Frohliche Weihnachten!"));
    m.insert(pair<string, string>("austria","Frohe Weihnacht!"));
    m.insert(pair<string, string>("coreia","Chuk Sung Tan!"));
    m.insert(pair<string, string>("espanha","Feliz Navidad!"));
    m.insert(pair<string, string>("grecia","Kala Christougena!"));
    m.insert(pair<string, string>("estados-unidos", "Merry Christmas!"));
    m.insert(pair<string, string>("inglaterra","Merry Christmas!"));
    m.insert(pair<string, string>("australia","Merry Christmas!"));
    m.insert(pair<string, string>("portugal","Feliz Natal!"));
    m.insert(pair<string, string>("suecia","God Jul!"));
    m.insert(pair<string, string>("turquia","Mutlu Noeller"));
    m.insert(pair<string, string>("argentina","Feliz Navidad!"));
    m.insert(pair<string, string>("chile","Feliz Navidad!"));
    m.insert(pair<string, string>("mexico","Feliz Navidad!"));
    m.insert(pair<string, string>("antardida","Merry Christmas!"));
    m.insert(pair<string, string>("canada","Merry Christmas!"));
    m.insert(pair<string, string>("irlanda","Nollaig Shona Dhuit!"));
    m.insert(pair<string, string>("belgica","Zalig Kerstfeest!"));
    m.insert(pair<string, string>("italia","Buon Natale!"));
    m.insert(pair<string, string>("libia","Buon Natale!"));
    m.insert(pair<string, string>("siria","Milad Mubarak!"));
    m.insert(pair<string, string>("marrocos","Milad Mubarak!"));
    m.insert(pair<string, string>("japao","Merii Kurisumasu!"));
}
int main()
{
   init();
   string s;
    while(cin >> s){
        auto p = m.find(s);
        if (p != m.end())
            cout << p->second<<endl;//m.at(m.find(s)).second << endl;
        else
            cout<<"--- NOT FOUND ---\n";
    }
   return 0;
}