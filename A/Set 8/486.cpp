#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;

    if(n%2==1){
        n++;
        cout<<"-";
    }

    cout<<n/2<<"\n";  
}