#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin>>n>>m;

    if(n%2 !=0)n++;
    if(n+2 > m) cout<<"-1";
    else cout<<n<<" "<<n+1<<" "<<n+2<<"\n";
}