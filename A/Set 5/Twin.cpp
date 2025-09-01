#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tot=0;
    cin>>n;

    vector<int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
        tot+=vet[i];
    }

    sort(vet.rbegin(), vet.rend());

    int my=0, brother=tot, id=0;
    while(my<= brother){
        my+=vet[id];
        brother-=vet[id];
        id++;
    }

    cout<<id++<<"\n";
}