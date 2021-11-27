//Program to find if a number is a duck number or not
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string ne;
    int f=0;
    cout<<"Enter a string";
    cin>>ne;
    int n=stoi(ne);
    ne=to_string(n);
    for(int i=0;ne[i]!='\0';i++)
    {
        if(ne[i]=='0')
        {
        f=1;
        break;
        }
    }
    if(f==1)
    cout<<"\nIt is a duck number";
    else
    cout<<"\nIt is not a duck number";
    return 0;
}