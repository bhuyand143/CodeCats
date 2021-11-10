//Program to find the occurances of the elements in the array
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<"\n Enter the number of elements you want to enter in the array:-";
    cin>>n;
    int arr[n],k=0,un[n],f=1,c=0;
    cout<<"\n Enter the elements into the array:-";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    un[0]=arr[0];
    // for finding an unique array
    for(int j=0;j<n;j++)
    {
            f=1;
            for(int i=0;i<=k;i++)
            if(un[i]==arr[j])
            f=0; 
            if(f==1)
            { 
                k++;
                un[k]=arr[j];
            }   
    } 
    //counting the occurances
    for (int i=0;i<=k;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
            if(arr[j]==un[i])
             c++;
        cout<<un[i]<<" -"<<c<<"  times\n";     
    }
    return 0;
}