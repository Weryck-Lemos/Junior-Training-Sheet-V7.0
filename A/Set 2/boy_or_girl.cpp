#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> word;
    string s;
    cin>>s;

    
    for(char c : s)
    {
        word.insert(c);
    }

    size_t ans = word.size();

    if(ans%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}