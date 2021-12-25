#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,snew;
    set<char> d;
    cin>>s;
    for(auto i: s)
    {
        if(d.find(i)==d.end())
        snew.push_back(i);
        if(i>=65 and i<=90)
        d.insert(i+32);
        else
        d.insert(i);
    }
    cout<<snew;
    return 0;
}
