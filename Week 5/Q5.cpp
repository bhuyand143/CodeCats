//Program to find the factorial of a number using pointer
#include<iostream>
using namespace std;
int main(void)
{
    int n,*p,f=1;
    p=&n;
    cout<<"\nEnter the number whose factorial you want to find out:-";
    cin>>n;
    for(;*p>0;*p-=1)
    f*=*p;
    cout<<" "<<f;
    return 0;
}