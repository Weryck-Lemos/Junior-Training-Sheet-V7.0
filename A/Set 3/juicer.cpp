#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,b,d, ans=0, waste=0;
    cin>>n>>b>>d;

    for(int i=0; i<n; i++)
    {
        int orange;
        cin>>orange;

        if(orange<=b)
        {
            waste+=orange;
            if(waste>d)
            {
                ans++;
                waste=0;
            }
        }
    }
    
    cout<<ans<<"\n";
}