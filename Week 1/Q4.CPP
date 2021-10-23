//Program to find out weather a year is leap year or not
#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	cin>> year;
	if((year%4==0 && year%100!=0)|| year%400==0)
	cout<<"Leap year";
    else 
    cout<<"Not a Leap year"	;
    getch();
}