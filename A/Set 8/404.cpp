#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    bool verif = true;
    char d1 = a[0][0];
    char resto = a[0][1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j || i+j == n-1){
                if(a[i][j] != d1){
                    verif = false;
                    break;
                }
            }
            else{
                if(a[i][j] != resto){
                    verif = false;
                    break;
                }
            }
        }
    }
    if(d1 == resto) verif = false;

    if(verif)cout<<"YES\n";
    else cout<<"NO\n";
}