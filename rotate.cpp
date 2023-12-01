#include<iostream>
using namespace std;
int main()
{
    int in;
    cin>>in;
    int x,y,z;
    z=in%10;
    in/=10;
    y=in%10;
    in/=10;
    x=in;
    
    int num1,num2,num3;
    num1=z+(10*y)+(100*x);
    num2=x+(10*z)+(100*y);
    num3=y+(10*x)+(100*z);
    int sum=num1+num2+num3;
    cout<<sum;
}