#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergetwosortedarrays(int arr1[], int arr2[], int m, int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<=arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
       cout<<arr1[i]<<" ";
       i++;
    }
    while(j<n)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main()
{
    int arr1[] = {2,5,8,14,17,89};
    int arr2[] = {1,6,45,62,90};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    mergetwosortedarrays(arr1,arr2,m,n);
    return 0;
}
