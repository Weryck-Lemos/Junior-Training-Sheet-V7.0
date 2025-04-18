#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> num(n), p, m, ed;
    for(int i =0; i<n; i++){
        cin>>num[i];

        if(num[i]==1)p.push_back(i+1);
        else if(num[i]==2)m.push_back(i+1);
        else ed.push_back(i+1);
    }

    int tam = min(p.size(), min(m.size(), ed.size()));
    cout<<tam<<"\n";

    if(tam!=0){
        for(int i=0; i<tam; i++){
            cout<<p[i]<<" "<<m[i]<<" "<<ed[i]<<"\n";
        }
    }
}