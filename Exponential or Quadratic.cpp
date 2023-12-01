#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double ans=sqrt(x*(12800000+x));
    printf("%0.9lf",ans);
    
}