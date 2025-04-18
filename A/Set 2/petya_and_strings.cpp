#include <bits/stdc++.h>
using namespace std;

int main()
{

    string n,m;
    cin>>n>>m;

    for(size_t i=0; i<n.size();i++)
    {
        n[i] = tolower(n[i]);
        m[i] = tolower(m[i]);
    }

    if(n==m) cout<<"0\n";
    else if(n>m) cout<<"1\n";
    else cout<<"-1\n";

    
}