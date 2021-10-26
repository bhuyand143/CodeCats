#include <iostream.h>
#include<conio.h>
void main()
{
	long int i,n,rev=0,rem;
	cout<<"Enter a number";
	cin>>n;
	for(;n;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
    }
    cout<<"\nThe number in reverse order is: "<<rev;
    getch();

}