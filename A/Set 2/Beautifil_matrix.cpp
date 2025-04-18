#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int l, c;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            int x;
            cin>>x;

            if(x==1)
            {
                l=i;
                c=j;
            }
        }
    }

    int ans = abs(l-3) + abs(c-3);
    cout<<ans<<'\n';
}