#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertsort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int temp = arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {4,8,578,2,5,3,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertsort(arr, n);
    return 0;
}
