#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

