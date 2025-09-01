#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    
    vector<bool> pres(n+1, false);
    int need = n;

    for(int i=0; i<n; i++){
        pres[vet[i]] = true;
        bool printed = false;

        while(need >=1 && pres[need]){
            if(printed) cout<<" ";
            cout<<need;
            need--;
            printed = true;
        }

        cout<<"\n";
    }
}