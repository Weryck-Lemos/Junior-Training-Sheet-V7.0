#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0, police=0;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;

        if(x>0) police+=x;
        
        else
        {
            if(police) police--;

            else ans++;
        }
    }

    cout<<ans<<"\n";
}