#include<iostream>
using namespace std;
int main(void)
{
    int n,f=0;
    cout<<"Enter the string length:-";
    cin>>n;
    char s[n+1],s2[n+2];
    cout<<"Enter string 1 length n:-";
    cin>>s;
    cout<<"\nEnter string 2 lngth n+1:-";
    cin>>s2;
    for(int i=0;s2[i]!='\0';i++)
    {
        f=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s2[i]==s[j])
            {
                    f=1;
                    break;
            }
        }
        if(f==0)
        {
            cout<<s2[i];
            break;
        }
    }
    return 0;
}