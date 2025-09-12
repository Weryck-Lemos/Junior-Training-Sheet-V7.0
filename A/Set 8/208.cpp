#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;

    getline(cin, str);

    string ans;
    for(size_t i = 0; i<str.size(); i++){
        if(i+2 <str.size() && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            if(!ans.empty() && ans.back() != ' '){
                ans.push_back(' ');
            }
            i+=2;
        }

        else{
            ans.push_back(str[i]);
        }
    }

    cout<<ans<<"\n";
}