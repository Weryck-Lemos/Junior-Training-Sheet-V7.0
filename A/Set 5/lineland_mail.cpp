#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;

    vector<ll> num(n);
    for(ll &i: num)cin>>i;

    for(int i=0; i<n; i++){
        if(i!=0){
            cout<<min(abs(num[i]-num[i+1]) ,abs(num[i]-num[i-1]))<<" ";
            cout<<max(abs(num[i]-num[0])   ,abs(num[i]-num[n-1]));
            
        }

        else{
            cout<<abs(num[0]-num[1])<<" ";
            cout<<abs(num[0]- num[n-1]);
        }

        cout<<"\n";
    }
}