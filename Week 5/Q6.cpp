//Sum of 1-D array using pointers
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<"Enter the array size:-";
    cin>>n;
    cout<<"\nNow enter values into array:-";
    int a[n] ,sum=0;
    int *p=a;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=*(p+i);
    }
    cout<<sum;
return 0;
}