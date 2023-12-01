#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,x1,x2;
    cin>>a>>b>>c>>d>>e>>f>>x1;
    x2=x1;
    int x=0;
    int t1=0,t2=0;
    while(x1>=0)
    {
        
            
            if(a>x1)
            t1+=x1;
            else
            t1+=a;
        
        x1=x1-(a+c);
        x++;
        
        
    }
    x=0;
    while(x2>=0)
    {
       
            
            if(d>x2)
            t2+=x2;
            else
            t2+=d;
        
        x2=x2-(d+f);
        x++;
        
        
    }
    int ans1,ans2;
    ans1=t1*b;
    ans2=t2*e;
    if(ans1>ans2)
    cout<<"Takahashi";
    else if(ans1<ans2)
    cout<<"Aoki";
    else
    cout<<"Draw";   
   
}