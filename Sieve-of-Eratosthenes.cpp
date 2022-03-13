#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool> prime(n+1,true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=n; j+=i) //all numbers which are greater than or equal to square of i(which is prime)...
            {
                prime[j] = false;   //... and are multiple of i are not prime.
            }
        }
    }
    for(int i=0; i<prime.size(); i++)
    {
        if(prime[i]==true)
        cout<<i<<" ";
    }
    return 0;
}
