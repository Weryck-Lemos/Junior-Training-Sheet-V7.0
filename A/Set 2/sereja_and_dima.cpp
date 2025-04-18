#include <bits/stdc++.h>
using namespace std;
vector<int> card;
int l,r;

int sum()
{
    int ans = max(card.front(), card.back());

    if(card.front()> card.back()) card.erase(card.begin());
    else card.pop_back();

    return ans;
        
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        card.push_back(x);
    }

    int s=0, d=0;
    while(!card.empty())
    {
        s += sum();
        if(card.empty()) break;
        d += sum();
    }
    cout<<s<<" "<<d<<"\n";
    
}