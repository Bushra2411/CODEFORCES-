#include<iostream>
#include<string>
using namespace std;
int main()
{
    int up=0,low=0;
    string s;
    cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(isupper(s[i]))     //used to check if the argument contains any uppercase letters such as ABCD
       {
        up++;
       }
       else
       {
        low++;
       }
   }
   if(up<low)
   {
       for(int i=0;i<s.size();i++)
       {
           s[i]=tolower(s[i]);  //converts an uppercase alphabet to a lowercase alphabet
       }
       cout<<s<<endl;
   }

   if(up>low)
   {
       for(int i=0;i<s.size();i++)
       {
           s[i]=toupper(s[i]);    //convert an lowercase alphabet to a uppercase alphabet
       }
       cout<<s<<endl;
   }

   if(up==low)
   {
       for(int i=0;i<s.size();i++)
       {
           s[i]=tolower(s[i]);
       }
       cout<<s<<endl;
   }

}

