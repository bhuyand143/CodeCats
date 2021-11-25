//program to concatenate two strings
#include<iostream>
using namespace std;
int main(void)
{
    char st[20],st2[10],*p1;
    cin>>st;
    cin>>st2;
    p1=st;
    int i;
    for(i=0;st[i]!='\0';i++,p1++);
    for(i=0;st2[i]!='\0';i++)
    {
        *p1=st2[i];
        p1++;
    }
    *p1='\0';
    cout<<st;
    return 0;
}