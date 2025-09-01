#include <bits/stdc++.h>
using namespace std;

int main(){
    char shift;
    cin>>shift;

    string txt;
    cin>>txt;

    string container = "qwertyuiopasdfghjkl;zxcvbnm,./";
    vector<char> vet;
    map<char,int> value;
    for(size_t i=0; i<container.size(); i++){
        vet.push_back(container[i]);
        value[vet[i]]=i;
    }

    int p = (shift =='R' ? -1 : 1); 

    for(char c : txt){
        int id = value[c];
        cout<<vet[id+p];
    }    
}