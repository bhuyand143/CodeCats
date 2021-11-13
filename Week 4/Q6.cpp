//Program to find the index position of an element in a distinct sorted array 
//if array is not sorted then sort it first
//i If not, return the index where it would be if it were inserted in order.
#include<iostream>
using namespace std;
int checkindex(int a[],int n,int x)
{
    for (int  i = 0; i < n-1; i++)
    {
        if(i==a[i])
        return x;
        if(x>a[i]&& x<=a[i+1])
        return i+1;
        if (x>a[n-1])
        return n;
        if(x<a[0])
        return 0;    
    }
    return -1;
}
void  sort(int a[],int n)
{
    int temp;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }  
    cout<<"\nSorted array:-";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(void)
{
    int n;
    cout<<"\nEnter the no of element you want to enter in the array:-";
    cin>>n;
    cout<<"\n Now enter the elemenet into the array:-";
    int ar[n],x;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,n);
    cout<<"\nNow enter the value you want to search in the sorted array";
    cin>>x;
    int result=checkindex(ar,n,x);
    cout<<"\n Result is:- "<<result;
    return 0;
}