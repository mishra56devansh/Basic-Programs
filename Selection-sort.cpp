#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectsort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        int min_index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
                min_index=j;
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        //arr[min_index]=INT_MAX;
    }
    for(int i=0; i<n; i++)
    {
        //arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1,8,3,4,2,6,7,5,150,35,87,92,65,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectsort(arr,n);
	return 0;
}
