#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b, c;

    while(cin>>a>>b>>c){
        if(a==0 || b==0)return 0;

        ll T = (a-7)*(b-7);
        ll ans = (c==1) ? (T+1)/2 : T/2;
        cout<<ans<<"\n";
    }
}