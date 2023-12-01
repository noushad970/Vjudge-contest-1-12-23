#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y;
        if(n<=10)
        {
            x=0;
            y=n;
        }
        else
        {
            x=n-10;
            y=10;
        }
        cout<<x<<" "<<y<<endl;
    }
    
}