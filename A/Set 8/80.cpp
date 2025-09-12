#include <bits/stdc++.h>
using namespace std;

bool isprim(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }

    return true;
}

int main(){
    int n,m;
    cin>>n>>m;

    int proxPrim=n+1;
    while(true){
        if(isprim(proxPrim)){
            break;
        }

        proxPrim++;
    }

    proxPrim == m ? cout<<"YES\n" : cout<<"NO\n";
}