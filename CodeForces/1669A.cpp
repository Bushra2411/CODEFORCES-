
#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
    long n;
    cin>>n;
    for(int i=1;i<=n;i++){
            long a;
            cin>>a;
        if(1900<=a){
            cout<<"Division 1"<<endl;
        }
        else if( 1600<=a&& a<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(1400<=a && a<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(a<=1399){
            cout<<"Division 4"<<endl;
        }

    }
}
