#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,h,m,t;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>h>>m;
        h=23-h;
        h=60*h;
        m=60-m;
        m=m+h;
        cout<<m<<endl;
    }
}
