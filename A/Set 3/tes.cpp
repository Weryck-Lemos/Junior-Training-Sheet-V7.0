#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void imprimir(int n){
    if(n>=0)cout<<'*';
    else return;
    imprimir(n-=1);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n;
    
    imprimir(n);
}