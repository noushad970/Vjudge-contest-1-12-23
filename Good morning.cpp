#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    if(h1>h2)
    cout<<"Aoki"<<endl;
    else if(h1<h2)
    cout<<"Takahashi"<<endl;
    else if(m1<m2)
    cout<<"Takahashi"<<endl;
    else if(m1>m2)
    cout<<"Aoki"<<endl;
    else
    cout<<"Takahashi"<<endl;
    
    
}