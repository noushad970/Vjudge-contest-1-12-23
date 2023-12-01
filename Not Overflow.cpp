#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    long int x;
    cin>>x;
    if(x>=-(pow(2,31)) && x<=(pow(2,31)-1))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
}