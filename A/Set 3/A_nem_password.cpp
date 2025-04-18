#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    char word = 'a';
    while(n--){
        cout<<word;
        word++;
        if(word== 'a'+k) word='a';
    }
}