#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=a+(b*c);
    int ans2=a+(b+c);
    int ans3=a*b*c;
    int ans4=(a+b)*c;
    int ans5=a+b+c;
    int ans6=a*(b+c);

    int ans=max(ans6,max(ans4,max(ans3,max(ans2,max(ans5,ans1)))));
    cout<<ans;
}
