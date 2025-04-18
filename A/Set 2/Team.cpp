#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int p,v,t;
        cin>>p>>v>>t;

        int sol = p+v+t;
        if(sol>=2)ans++;
    }

    cout<<ans<<"\n";
}