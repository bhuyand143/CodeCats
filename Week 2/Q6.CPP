//Program to find the power of a number using for loop
#include<iostream.h>
#include<conio.h>
void main()
{
	long int a, b,i,pow=1;
	cout<<"Enter two numbers";
	cin>>a>>b;
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	cout<<"The result is: "<<pow;
	getch();
}