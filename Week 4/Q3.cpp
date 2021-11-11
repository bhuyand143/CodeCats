//Program to rotate an array by k steps in right direction
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<"\n Enter the no of element you want to enter:-";
    cin>>n;
    int ar[n],k,temp,i,j;
    cout<<"\nNow enter the elements into the array:- ";
    for(i=0;i<n;i++)
    cin>>ar[i];
    cout<<"\nEnter the value of k:-";
    cin>>k;
    for(i=0;i<k;i++)
    {
         temp= ar[n-1];
         for(j=n-1;j>0;j--)
         ar[j]=ar[j-1];
         ar[0]=temp;
    }
    cout<<"\n Output:-";
    for(i=0;i<n;i++)
    cout<<ar[i]<<" ";
    return 0;
}