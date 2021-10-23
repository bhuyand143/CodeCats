//Program to take the basic salary of the employee as input and find out the hra,da, and gross salary 
#include <iostream.h>
#include <conio.h>
void main()
{
	float bs,hra,da,gs;
	cout<<"Enter Basic Salary";
	cin>>bs;
	if(bs<=10000)
	{
		hra=0.2*bs;
		da=0.8*bs;
		gs=hra+da+bs;
	}
	else if(bs<=20000)
	{
		hra=0.25*bs;
		da=0.9*bs;
		gs=hra+da+bs;
	}
	else if(bs>20000)
	{
		hra=0.3*bs;
		da=0.95*bs;
		gs=hra+da+bs;
	}
	cout<<"HRA:"<<hra<<" "<<"DA:"<<da<<" "<<"Gross Salary:"<<gs;
	getch();
}
	
	
	