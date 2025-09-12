#include <bits/stdc++.h>
using namespace std;

int main(){ 
    string a,b;

    while(cin>>a>>b){
        int n = a.size(), m = b.size();
        vector<int> res(n+m,0);

        for(int i=n-1; i>=0; i--){
            int da = a[i] - '0';
            for(int j = m-1; j>=0; j--){
                int db = b[j] - '0';
                int sum = da*db + res[i+j+1];
                res[i+j+1] = sum%10;
                res[i+j] +=sum/10;
            }
        }

        string out;
        int k=0;
        while(k< res.size() - 1 && res[k] == 0)k++;
        for(; k< res.size(); k++)out.push_back('0' + res[k]);
        cout<<out<<"\n";
    }
}
//  2
//5555
//0055
//   5