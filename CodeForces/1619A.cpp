#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        int sz=s.size();
        if(sz%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int lim=sz/2;
            string s1,s2;
            s1=s.substr(0,lim);
            s2=s.substr(lim);
            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}