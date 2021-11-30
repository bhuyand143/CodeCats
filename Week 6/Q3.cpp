#include<iostream>
using namespace std;
int main(void)
{
    string s;
    cout<<"Enter the string:-";
    cin>>s;
    int k,l=0,m=0;
    cout<<"Enter the value of k:-";
    cin>>k;
    char t[s.size()];
    for(int i=0;i<s.size();i++)
    {
        l=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[i]==s[j])
            l++;
        }
        if(l>=k)
        {
            t[m]=s[i];
            m++;
        }
    }
    cout<<"\nThe result is:- ";
    for(int j=0;j<m;j++)
    cout<<t[j];
    return 0;
}