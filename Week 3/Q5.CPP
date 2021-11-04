#include<iostream>
using namespace std;
int main(void)
{
    int n,sum,se,so,sep,sop;
    sum=so=sep=sop=se=0;
    cout<<"\nEnter the number of elements to be stored in the array:-";
    cin>>n;
    int ar[n];
    cout<<"Now enter the element into the array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(ar[i]%2==0)
          se+=ar[i];
        if(i%2==0)
         sep+=ar[i];
        if(ar[i]%2!=0)
          so+=ar[i];
        if(i%2!=0)
        sop+=ar[i];

    }
    cout<<"Output:-"<<sum<<" "<<se<<" "<<so<<" "<<sep<<" "<<sop;
return 0;
}