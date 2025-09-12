#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<string, int> v;
    v["Tetrahedron"] = 4;
    v["Cube"] = 6;
    v["Octahedron"] = 8;
    v["Dodecahedron"] = 12;
    v["Icosahedron"] = 20;

    int ans=0;
    while(n--){
        string x;
        cin>>x;

        ans += v[x];
    }

    cout<<ans<<"\n";
}