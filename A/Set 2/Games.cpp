#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<pair<int,int>> c(n);
    for(int i=0; i<n; i++)
    {
        cin>>c[i].first>>c[i].second;
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(c[i].first == c[j].second) ans++;
        }
    }

    cout<<ans<<endl;
}