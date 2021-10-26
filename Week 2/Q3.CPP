//Program to find a number is Armstrong or not
#include<iostream.h>
#include <conio.h>
void main()
{
	int n,i,s=0,rem;
	cout<<"Enter a number";
	cin>>n;
	i=n;
	for(;n;n=n/10)
	{
		rem=n%10;
		s+=(rem*rem*rem);
	}
	if(s==i)
		cout<<i<<" is an Armstrong no";
	else
		cout<<i<<" is not an Armstrong no";
	getch();
}