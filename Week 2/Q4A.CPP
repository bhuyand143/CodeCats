//Program to find the prime numbers with in a range of numbers
#include<iostream.h>
#include<conio.h>
void main()
{
	int lw,up,i,f=1,j;
	cout<<"Enter lower limit:-";
	cin>>lw;
	cout<<"\nEnter upper limit:-";
	cin>>up;
	cout<<"\n";
	for(j=lw;j<=up;j++)
	{
	f=1;
	for(i=2;i<=j/2;i++)
	{
		if(j%i==0)
		f=0;
	}
	if(f==1)
		cout<<j<<" ";
    }
	getch();

}