#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,x=-1,y, ans=0;
    cin>>n;
    

    for(int i=0; i<n; i++)
    {
        y = x;
        cin>>x;
        if(y!=x)ans++;
    }

    cout<<ans<<"\n";
}