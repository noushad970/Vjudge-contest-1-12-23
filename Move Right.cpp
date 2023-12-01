#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>st;
    st.push_back('0');
    st.push_back(s[0]);
    st.push_back(s[1]);
    st.push_back(s[2]);
    for(int i=0;i<4;i++)
    cout<<st[i];
    
}