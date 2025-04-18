#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    
    map<int,int> box;
    for(int i=1; i<=4; i++)
    {
        int x;
        cin>>x;

        box[i]= x; 
    }

    int ans=0;
    string val;
    cin>>val;
    for(char c : val)
    {
        int idx = c-'0';
        ans+= box[idx];
    }

    cout<<ans<<"\n";
}