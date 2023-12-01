#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if((a==1 && b==10) || (a==10 && b==1))
    cout<<"Yes";
    else if( a+1==b || b+1==a)
    cout<<"Yes";
    else 
    cout<<"No";
    
}