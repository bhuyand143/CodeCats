//Program to swap to numbers using pointers with out using third variable
#include<iostream>
using namespace std;
void swap(int * x, int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main(void)
{
    int a=5,b=10;
    cout<<"\nThe value before swapping is:- "<<a<<" "<<b;
    swap(&a,&b);
    cout<<"\nThe value after swapping is:- "<<a<<" "<<b;
    return 0;
}