//Program to do  the sum of two numbers using pointers
#include<iostream>
using namespace std;
int main(void)
{
    int a,b,*c,*d;
    c=&a;
    d=&b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"\nThe sum of two number is :"<<*c+*d;
    return 0; 
}