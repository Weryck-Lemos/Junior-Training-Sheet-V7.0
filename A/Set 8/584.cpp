#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, t;
    cin>>n>>t;

   if(t/10 >= n) cout<<-1;
   else{
        if(t>=10){
            for(int i=0; i<n-1; i++)cout<<t/10;
            cout<<t%10;
        }

        else{
            for(int i=0; i<n; i++)cout<<t;
        }
        
   }

    cout<<"\n";
}