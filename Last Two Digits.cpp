#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<2;i++)
    {
        ans=ans*10+n%10;
        n/=10;
    }
    
    for(int i=0;i<2;i++)
    {
        cout<<ans%10;
        ans/=10;
    }
    
}