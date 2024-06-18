#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main()
{
    int i;
    string x,b;

    cin>>x>>b;

    for ( i = 0; i < x.size(); i++)
    {
        x[i]=tolower(x[i]);
        b[i]=tolower(b[i]);
    }
    if (x==b)
    {
        cout<<"0"<<endl;
    }
    else
    {
      for ( i = 0; i < x.size(); i++)
      {
        if (x[i]<b[i])
        {
            cout<<"-1"<<endl;
            break;
        }
        if(x[i]>b[i])
        {
            cout<<"1"<<endl;
            break;
        }    
      }
      
    }  
}