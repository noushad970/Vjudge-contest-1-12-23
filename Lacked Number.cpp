#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int z=0,o=0,t=0,th=0,f=0,fi=0,si=0,se=0,e=0,n=0;
    for(int i=0;i<9;i++)
    {   
        
        if(s[i]=='0')
        {
            z++;
        }
        if(s[i]=='1')
        {
            o++;
        }
        if(s[i]=='2')
        {
            t++;
        }
        if(s[i]=='3')
        {
            th++;
        }
        if(s[i]=='4')
        {
            f++;
        }
        if(s[i]=='5')
        {
            fi++;
        }
        if(s[i]=='6')
        {
            si++;
        }
        if(s[i]=='7')
        {
            se++;
        }
        if(s[i]=='8')
        {
            e++;
        }
        if(s[i]=='9')
        {
            n++;
        }
    }
    if(z==0)
    cout<<"0";
    if(o==0)
    cout<<'1';
    if(t==0)
    cout<<'2';
    if(th==0)
    cout<<'3';
    if(f==0)
    cout<<'4';
    if(fi==0)
    cout<<'5';
    if(si==0)
    cout<<'6';
    if(se==0)
    cout<<'7';
    if(e==0)
    cout<<'8';
    if(n==0)
    cout<<'9';
    
}