
#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int i=0;i<s.length()-1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.length()-1]<<endl;
    }
}
