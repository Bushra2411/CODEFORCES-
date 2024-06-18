#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        }
        if(a-b==c){
            cout<<"-"<<endl;
        }
    }
    
}