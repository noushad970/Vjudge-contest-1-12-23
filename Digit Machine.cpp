#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    cin>>a[i];
    int ans=a[0];
    ans=a[ans];
    ans=a[ans];
    cout<<ans;
    
}