//program to concatenate two strings
#include<iostream>
using namespace std;
int main(void)
{
    char st[20],st2[10],*p1,*p2;
    cin>>st;
    cin>>st2;
    p1=st;
    p2=st2;
    int f=0;
    for(;*p1!='\0'||*p2!='\0';p1++,p2++)
    {
        if(*p1!=*p2)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"\nEqual";
    else
    cout<<"\nNot Equal";
    return 0;
}