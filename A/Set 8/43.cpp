#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, int> team;

    for(int i=0; i<n; i++){
        string x;
        cin>>x;

        team[x]++;
    }

    int maior=0;
    string ans;

    for(auto i : team){
        if(i.second>maior){
            maior = i.second;
            ans = i.first;
        }
    }

    cout<<ans<<"\n";
}