
#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10|| b+c>=10 || c+a>=10){
             cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
