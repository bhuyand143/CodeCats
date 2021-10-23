//Program to find out the roots of a quadratic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	float b,a,c,d,ro,x,y;
	cout<<"Enter the details of the quadratic equation";
	cout<<endl<<"b=";
     cin>>b;
	cout<<endl<<"a=";
     cin>>a;
	cout<<endl<<"c=";
     cin>>c;
    d=((b*b)-4*a*c);
    if(d<0)
    {
    cout<<"imaginary roots";	
    }
    ro=sqrt(d);
    if(d==0)
    {
    x=-b/2*a;	
    cout<<"Equal and real roots"<<endl;
    cout<<"x:"<<x<<" y:"<<x;
    }
    if(d>0)
    {
    x=(-b+ro)/2*a;
    y=(-b-ro)/2*a;
    cout<<"Real roots"<<endl;
    cout<<"x:"<<x<<" y:"<<y;
    }
    getch();
}