#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;

    while(cin>>n&&n){
        ll r = sqrt(n);
        if(r*r == n)cout<<"yes\n";
        else cout<<"no\n";
    }
}