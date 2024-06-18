#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a==b){
            cout<<c<<endl;
        }
        else if(a==c){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }

}