#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> vect(26,0);
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<97)
            s[i]=char(s[i]+32);
    }
    for(int i=0; i<s.size(); i++){
        vect[s[i]-'a']++;
    }
    for(int i=0; i<vect.size(); i++){
        if(vect[i]!=0)
        cout<<char(i+'a')<<" "<<vect[i]<<endl;
    }
    return 0;
}
