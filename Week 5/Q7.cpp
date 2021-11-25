// Find number of positive negative and zeros in array through pointers
#include<iostream>
using namespace std;
int main(void)
{
    int no;
    cout<<"Enter the array size:-";
    cin>>no;
    cout<<"\nNow enter values into array:-";
    int ar[no] ,p=0,n=0,z=0;
    int *a=ar;
     for(int i=0;i<no;i++)
    {
        cin>>ar[i];
        if(*(a+i)==0)
        z++;
        else if(*(a+i)>0)
        p++;
        else if(*(a+i)<0)
        n++;
    }
    cout<<"\nPositives :"<<p<<" Negatives:"<<n <<" Zeroes:"<<z;
    return 0;
}