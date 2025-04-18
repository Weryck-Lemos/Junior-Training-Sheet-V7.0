#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    int num =n;

    for(int i=1; i<=10 ;i++)
    {
        if(num%10==m || num%10==0)
        {
            cout<<i<<"\n";
            return 0;
        }

        num+=n;
    }
}