#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<bool> verif(n, false);

    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int x;
        cin>>x;

        verif[x-1]=true;
    }

    cin>>k;
    for(int i=0; i<k; i++){
        int x;
        cin>>x;

        verif[x-1]=true;
    }

    for(bool i : verif){
        if(!i){
            cout<<"Oh, my keyboard!\n";
            return 0;
        }
    }

    cout<<"I become the guy.\n";
}