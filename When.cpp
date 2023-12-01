#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans1=21,ans2;
    
    if(x==0)
    cout<<"21:00";
    else if(x<60)
    {
        cout<<ans1<<":"<<x;
    }
    else
    {   
        ans1=22;
        ans2=x-60;
        if(ans2<10)
        cout<<ans1<<":0"<<ans2;
        else if(ans2>10)
        cout<<ans1<<":"<<ans2;
        

    }
}