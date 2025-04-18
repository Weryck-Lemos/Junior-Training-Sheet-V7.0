#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> f(n),ans(n);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        ans[x-1]=i+1;
    }

    for(int i : ans)cout<<i<<" ";
}