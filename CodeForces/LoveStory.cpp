#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    string r="codeforces";
    for(int i=1;i<=n;i++){
        cin>>s;
        int k=0;
    for(int j=0;j<10;j++){
        if(s[j]!=r[j]){
            k++;
        }
    }
        cout<<k<<endl;
    }
}
s