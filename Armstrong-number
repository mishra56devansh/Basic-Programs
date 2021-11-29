#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, sum=0, count=0;
    cin>>n;
    temp=n;
    while(temp){
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp){
        sum = sum + pow(temp%10,count);
        temp/=10;
    }
    if(sum==n)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
