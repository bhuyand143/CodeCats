//Program to reverse an array
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<"\n Enter the number of elements in the array:-";
    cin>>n;
    int ar[n], rev[n];
    cout<<"\n Enter the elements in the array:-";
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (int  i=0,j=n-1;i<n;i++,j--)
    {
        rev[i]=ar[j];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<rev[i]<<" ";
    }
    return 0;
}