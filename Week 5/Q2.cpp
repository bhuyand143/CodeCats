//Program to implement pointer to pointer
#include<iostream>
using namespace std;
int main(void)
{
    int v=5,*a,**b; 
    a=&v;
    b=&a;
    **b=**b+1;
    v+=10;
    cout<<"\nvalue of v "<<v;
    cout<<"\nvalue of *a "<<*a;
    cout<<"\nvalue of *b "<<*b;
    cout<<"\nvalue of **b "<<**b;
    return 0;
}