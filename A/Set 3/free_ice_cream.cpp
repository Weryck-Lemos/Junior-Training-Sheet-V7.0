#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, triste=0;
    cin>>n>>x;

    while(n--){
        char op;
        int num;
        cin>>op>>num;

        if(op == '+') x+=num;

        else{
            if(num> x){
                triste++;
            }

            else{
                x-=num;
            }
        }
    }

    cout<<x<<" "<<triste<<"\n";
}