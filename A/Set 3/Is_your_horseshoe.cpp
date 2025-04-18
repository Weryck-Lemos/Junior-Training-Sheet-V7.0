#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> shoes;

    for(int i=0; i<4; i++)
    {
        int x;
        cin>>x;

        shoes.insert(x);
    }

    cout<<4-shoes.size()<<"\n";
}