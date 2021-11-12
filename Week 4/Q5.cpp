//Program to re arrange 0 1 2 in a given array array 
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<"\nEnter the value of the n:-";
    cin>>n;
    int res[3],ar[n];
    cout<<"\nNow enter the element into the array:-";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int c=0;
    for(int i=0;i<3;i++) res[i]=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        res[0]=res[0]+1; 
        if(ar[i]==1)
        res[1]=res[1]+1;
        if(ar[i]==2)
        res[2]=res[2]+1;

    }

    // Now arranging the array
    int k=0;
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<res[i];j++)
        {
        ar[k]=i;
        k++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    
    return 0;
}