//Program to find the highest,second highest,lowest and second lowest
#include<iostream>
using namespace std;
int main(void)
{
    int n,high,low,high2,low2;
    cout<<"\nEnter the size of array:-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    high=arr[0];
    low=arr[0];
    high2=arr[1];
    for(int i=0;i<n;i++)
    {
    if(high<arr[i])
    {
        high2=high;
        high=arr[i];
    }
    if(low>arr[i])
    {
        low2=low;
        low=arr[i];
    } 
    }
    cout<<"\nHighest:-"<<high;
    cout<<"\nlowest:-"<<low;
    cout<<"\nsecond highest:-"<<high2;
    cout<<"\nsecond lowest:-"<<low2;
    return 0;
}