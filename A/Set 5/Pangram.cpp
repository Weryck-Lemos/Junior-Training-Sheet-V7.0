#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string txt;
    cin>>txt;

    map<char, bool> carac;
    for(char i = 'a'; i<='z'; i++) carac[i] = false;

    for(char c : txt){
        carac[tolower(c)] = true;
    }

    bool ans = true;
    for(auto i : carac){
        if(!i.second)ans=false;
    }

    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
}