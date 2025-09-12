#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vet(n);

    bool rated = false;
    for(int i=0,x; i<n; i++){
        cin>>vet[i]>>x;

        if(vet[i] != x)rated = true;
    }

    if(rated){
        cout<<"rated\n";
    }

    else{
        vector<int> comp = vet;
        sort(comp.rbegin(), comp.rend());

        bool unrated = false;
        for(int i=0; i<n; i++){
            if(comp[i] != vet[i]) unrated = true;
        }

        if(unrated) cout<<"unrated\n";
        else cout<<"maybe\n";
    }
}