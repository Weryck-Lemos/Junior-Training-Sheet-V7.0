#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans=0;
    cin>>n;

    vector<char> s(n);
    cin>>s[0];

    for(int i=1; i<n; i++)
    {
        cin>>s[i];
        if(s[i-1]==s[i])ans++;   
    }

    cout<<ans<<"\n";
}