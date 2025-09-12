#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    bool colored = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char x;
            cin>>x;

            if(x !='W' && x !='G' && x!='B'){
                colored = true;
            }
        }
    }

    if(colored) cout<<"#Color\n";
    else cout<<"#Black&White\n";
}