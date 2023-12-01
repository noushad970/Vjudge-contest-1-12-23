#include<iostream>
using namespace std;

int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int x[n];
    for(int i=0;i<n;i++)
    cin>>x[i];
    long long int a[q],b[q];
    for(int i=0;i<q;i++)
    {
        cin>>a[i]>>b[i];
    }
    long long int sum=0;
    for(int i=0;i<q;i++)
    {
        sum=0;
        for(int j=a[i]-1;j<b[i];j++)
        sum+=x[j];
        cout<<sum<<endl;
    }
}