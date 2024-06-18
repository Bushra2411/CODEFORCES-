
#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main()
{
     string a;
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        cin>>a;
        for(int i=0;i<a.length();i++){
            a[i]=toupper(a[i]);
        }
        if(a=="YES" || a=="yES" || a=="yes" || a=="Yes" || a=="YeS")
        {
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
     }
}
}

