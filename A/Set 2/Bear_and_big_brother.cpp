#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y, ans=0;
    cin>>x>>y;

    while(x<=y)
    {
        x*=3;
        y*=2;
        ans++;
    }

    cout<<ans<<"\n";
}