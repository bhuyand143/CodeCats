//Program to find the maximum between three numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cin>>a>>b>>c;
if(a>b && a>c)
cout<<a;
else if(b>c && b>a)
cout<<b;
else if(c>a && c>b)
cout<<c;
else
cout<<a;

getch();
}