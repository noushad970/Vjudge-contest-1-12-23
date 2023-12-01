#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {cin>>a[i];
        b[i]=a[i];
        }
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(a[i]>a[j])
                swap(a[i],a[j]);
            }
    }
    if(a[1]==b[1])
    cout<<"Yes";
    else
    cout<<"No";

    
}