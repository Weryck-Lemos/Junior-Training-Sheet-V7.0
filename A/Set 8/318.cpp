#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;

    ll topo = n;
    if(n%2==0){
        topo -= 1;
    }

    ll impar = (n+1)/2;

    if(k<= impar) cout<<2*k -1<<"\n";
    else cout<<2*(k-impar)<<"\n";  
}
