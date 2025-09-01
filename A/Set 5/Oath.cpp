#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int menor = *min_element(vet.begin(), vet.end());
    int maior = *max_element(vet.begin(), vet.end());
    int count = 0;
    for(int i=1; i<n; i++){
        if(vet[i]>menor && vet[i]<maior)count++;
    }

    cout<<count<<"\n";
}