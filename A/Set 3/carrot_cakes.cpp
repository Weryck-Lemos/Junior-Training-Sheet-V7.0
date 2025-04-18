#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int necessario, tempo, bolos, forno;
    cin>>necessario>>tempo>>bolos>>forno;

    double vezes = 1.0*necessario/bolos;

    int time1 = tempo*ceil(vezes), time2= tempo + forno;
    if(time1>time2) cout<<"YES\n";
    else cout<<"NO\n";


    


}