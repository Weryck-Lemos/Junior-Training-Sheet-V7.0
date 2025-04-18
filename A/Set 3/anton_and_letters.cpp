#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    set<char> ans;
    for(char c : s){
        if(c<= 'z' && c>='a')ans.insert(c);
    }

    cout<<ans.size()<<"\n";
}