#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=1;
    while(t--){
        
    double pi = 2 * acos (0.0);
    double r;
    cin>>r;
    double areaOfCir,areaOfRect;
    areaOfCir=pi*r*r;
    areaOfRect=(r+r)*(r+r);
    double ans=areaOfRect-areaOfCir;
    printf("Case %d: %0.2lf",x,ans);
    cout<<endl;
    x++;
    }
    
}