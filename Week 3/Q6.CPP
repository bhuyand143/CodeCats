#include<iostream>
using namespace std;
int main(void)
{
    int n,num,c=0;
    cout<<"\nEnter the number of elements to be stored in the array:-";
    cin>>n;
    int ar[n];
    cout<<"\nNow enter the element into the array:- ";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<"\nEnter the number whose occurence you want to find out";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==num)
        c++;
    }
    cout<<endl<<c;
    return 0;
}