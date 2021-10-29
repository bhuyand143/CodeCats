//Program to find the sum of odd and even numbers in a given series(using biwise & for odd even checking)
#include<iostream.h>
#include<conio.h>
void main()
{
int n,i=0,so=0,se=0;
cout<<"Enter the value of n:- ";
cin>>n;
for(i=1;i<=n;i++)
{
	if((i & 1)==1)
		so+=i;
	else
		se+=i;
}
cout<<"\nodd sum:-"<<so;
cout<<"\neven sum:-"<<se;
getch();
}