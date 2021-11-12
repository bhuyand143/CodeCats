//Program to enter an array and return the index position values that add up to the target
#include<iostream>
using namespace std;
int main(void)
{
	int i,x,j,sum,flag=0,n;
    cout<<"\n Enter the number of element you want to enter in the array:-";
    cin>>n;
    int ar[n];
    cout<<"\nEnter the value into array"; 
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"\nEnter the value of x";
	cin>>x;
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<5;j++)
		{
			 if(i==j)
			 	continue;
			if(ar[i]+ar[j]==x)
			{
				cout<<i<<" "<<j;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}

 return 0;
}