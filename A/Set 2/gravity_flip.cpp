#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int> box(n);
    for(int i=0; i<n; i++)cin>>box[i];

    sort(box.begin(), box.end());
    for(auto i : box)cout<<i<<" ";
}