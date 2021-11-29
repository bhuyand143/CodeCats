//Goal Parser
#include<iostream>
#include<string.h>
using namespace std;
void shift(char a[],int pos)
{
for(int i=pos;i<strlen(a);i++)
{
    a[i]=a[i+1];
}
}
int main(void)
{
    char s[20]; 
    cout<<"\nEnter the string:-";
    cin>>s;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(' )
        {
            if(s[i+1]==')')
            {
            s[i]='o';
            shift(s,i+1);
            i--;
            }
            else
            {
                shift(s,i);
                i--;
            }
        }
        if(s[i]==')')
        {  
        shift(s,i);
        i--;
        }
    }
    cout<<s;
    return 0;
}
