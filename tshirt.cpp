#include<iostream>
using namespace std;
int main()
{
     double a,b,c,x;
    cin>>a>>b>>c>>x;
     double ans=0;
    if(a>=x)
    cout<<"1.000000000000";
    else if(x<=b)
    {
        ans=c/(b-a);
        printf("%0.12lf",ans);
    }
    else
    cout<<"0.000000000000";

}