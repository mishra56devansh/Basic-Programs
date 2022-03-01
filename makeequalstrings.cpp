//program to make strings of same length given in array equal with minimum replacements. 
#include <bits/stdc++.h>
using namespace std;

void countminop(string arr[], int n)
{
    int m = arr[0].size();
    int hash[256][m];
    memset(hash,0,sizeof(hash));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            hash[arr[i][j]][j]++;
        }
    }
    int count=0;
    for(int i=0; i<m; i++)
    {
        int sum=0;
        int maximum=0;
        for(int j=0; j<256; j++)
        {
            sum+=hash[j][i];
            maximum = max(maximum,hash[j][i]);
        }
        count+=(sum-maximum);
    }
    cout<<count;
}

int main() {
	string arr[] = {"west", "east", "wait"};
	int n = sizeof(arr)/sizeof(arr[0]);
	countminop(arr,n);
	return 0;
}
