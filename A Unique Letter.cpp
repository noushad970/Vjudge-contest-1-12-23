#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char a,b,c;
    a=s[0];
    b=s[1];
    c=s[2];
    if(a!=b && a!=c)
    cout<<a;
    else if(b!=c && b!=a)
    cout<<b;
    else if(c!=a && c!=b)
    cout<<c;
    else
    cout<<"-1";

    
}