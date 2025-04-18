#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0,d=0;
    cin>>n;


    string s;
    cin>>s;
    for(auto c : s)
    {
        if(c=='D')d++;
        else a++;
    }

    if(a==d)cout<<"Friendship\n";
    else if(a>d) cout<<"Anton\n";
    else cout<<"Danik\n";
}