#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pos;
    cin>>pos;

    string str;
    cin>>str;

    int id=0;
    for(size_t i=0; i<str.size(); i++)
    {
        if(pos[id]== str[i])
        {
            id++;
        }
    }

    cout<<id+1<<"\n";

}