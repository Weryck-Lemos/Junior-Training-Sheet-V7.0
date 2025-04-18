#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ans;
    cin>>s;

    for(char c : s){
        if(c=='1' || c=='2' || c=='3')ans.push_back(c);
    }

    bool sum = false;
    sort(ans.begin(), ans.end());
    for(char c : ans){
        if(sum)cout<<"+";
        cout<<c;
        sum =true;
    }

}