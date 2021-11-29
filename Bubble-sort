#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[] = {2,5,4,1,8,7,9,2};
	int temp=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++)
	{
	    bool swapped = false;
	    for(int j=0; j<n-i-1;j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            swapped = true;
	            temp=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=temp;
	        }
	    }
	    if(swapped==false)
	    break;
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
