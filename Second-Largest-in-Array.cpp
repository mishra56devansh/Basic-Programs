#include <bits/stdc++.h>
using namespace std;

int ansindex(int arr[], int n)
{
    int largest = 0;
    int res = -1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
            
        }
        else if(arr[i] != arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main() {
    int arr[] = {10,10,10,5,15,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ansindex(arr,n);
	return 0;
}
