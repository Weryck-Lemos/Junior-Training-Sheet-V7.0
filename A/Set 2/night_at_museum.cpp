#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    char a,b;
    cin>>a>>b;

    a-='0', b-='0';
    cout<<min(abs(a-b), abs(a+26-b));*/

    int ans=0, ant= 'a'-'0';
    string s;
    cin>>s;

    for(char c : s)
    {
        int suc = c-'0';
        ans += min(abs(suc-ant), 26-abs(suc-ant));
        ant = suc;
    }

    cout<<ans<<"\n";

}