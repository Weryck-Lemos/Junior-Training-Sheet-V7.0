#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;  

    int ans= 7-max(n,m);
    int mdc = __gcd(ans,6);
    cout<<ans/mdc<<"/"<<6/mdc<<endl;
}