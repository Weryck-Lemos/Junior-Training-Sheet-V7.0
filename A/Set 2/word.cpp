#include <bits/stdc++.h>
using namespace std;

string word;

void up()
{
    for(size_t i=0; i<word.size(); i++)
    {
        word[i] = toupper(word[i]);
    }
}

void mi()
{
    for(size_t i=0; i<word.size();i++)
    {
        word[i] = tolower(word[i]);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>word;

    int u=0, m=0;
    for(auto c : word)
    {
        if(isupper(c)) u++;
        else m++;
    }

    up();

    if(u<=m)
    {
        mi();
        cout<<word<<"\n";
        return 0;
    }

    cout<<word<<"\n";
}