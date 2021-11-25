//Swap two 1-Darrays using pointers
#include<iostream>
using namespace std;
int main(void)
{
    int no;
    cout<<"Enter the array size:-";
    cin>>no;
    int ar1[no],ar2[no];
    int *p1,*p2;
    p1=ar1;
    p2=ar2;
    cout<<"\nNow enter values into array 1:-";
    for(int i=0;i<no;i++)
    cin>>ar1[i];
    cout<<"\nNow enter values into array 2:-";
    for(int i=0;i<no;i++)
    cin>>ar2[i];
    for(int i=0;i<no;i++)
    {
        *(p1+i)=*(p1+i) + *(p2+i);
        *(p2+i)=*(p1+i) - *(p2+i);
        *(p1+i)=*(p1+i) - *(p2+i);
    }
    cout<<"After swapping the value:- \n arr1:-";
    for(int i=0;i<no;i++)
    cout<<ar1[i]<<" ";
    cout<<"\narr2:-";
    for(int i=0;i<no;i++)
    cout<<ar2[i]<<" ";
    return 0;
}
