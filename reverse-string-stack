#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    string s,n;
    while(cin>>s)
    {
        for(auto i: s)
        {
            st.push(i);
        }
        for(int i=0; i<s.size(); i++)
        {
            n.push_back(st.top());
            st.pop();
        }
        cout<<n<<" ";
        n.clear();
    }
    return 0;
    
}
