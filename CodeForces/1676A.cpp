
#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if((a[0]+a[1]+a[2]) == (a[3]+a[4]+a[5])){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }

}
