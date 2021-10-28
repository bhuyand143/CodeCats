//Program to find a number is prime or not
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,f=0;
	cout<<"Enter a number";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		f=1;
	}
	if(f==1)
		cout<<"\n"<<n<<"is not a prime no";
	else
		cout<<"\n"<<n<<"is a prime no";
	getch();

}