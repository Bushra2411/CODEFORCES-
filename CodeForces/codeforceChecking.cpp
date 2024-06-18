#include<bits\stdc++.h>
#include<string>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
      char c;
      cin>>c;
      if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s'){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }

}