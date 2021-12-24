#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    vector<int> ans(n,-1);
    vector<int> vect(n);
    for(int i=0; i<n; i++)
    {
        cin>>vect[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        if(st.empty())
        {
            st.push(vect[i]);  
        }
        else
        {
            while(!st.empty() and vect[i]>=st.top())
            {
                st.pop();
            }
            if(!st.empty())
            {
                ans[i]=st.top();
            }
            st.push(vect[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
