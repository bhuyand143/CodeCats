//Program to display n terms of natural number and their sum
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	cout<<"Enter the value of n";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
		sum+=i; 
	}
	cout<<"\nThe sum of Natural Number upto "<<n<<"terms : "<<sum;
	getch();
}