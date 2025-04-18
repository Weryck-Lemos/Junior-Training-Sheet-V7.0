#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int> f(n+1);
    for(int i=1; i<=n; i++)cin>>f[i];

    int m;
    cin>>m;
    while(m--)
    {
        int wire, shot;
        cin>>wire>>shot;

        if(wire>1) f[wire-1]+= shot-1;
        
        if(wire<n) f[wire+1] += f[wire]-shot;

        f[wire]=0;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<f[i]<<"\n";
    }

    return 0;
}