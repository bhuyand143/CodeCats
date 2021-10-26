//Program to find a factorial of a number
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	cout<<"Enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	 fact*=i;
	cout<<"\nFactorial of the number "<<n<<" is:-"<<fact;
	getch(); 
}