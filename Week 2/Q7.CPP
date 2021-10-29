//Program to find the number of zeroes at the end of decimal form of number n factorial 
#include<iostream>
//#include<conio.h>
using namespace std;
int main(void)
{
	int i,j,n;
	cout<<"Enter the value of n";
	cin>>n;
	unsigned long  int a[n],f[n],temp,fact;
	for (j=0;j<n;j++)
	{
	   fact=1;
	   cin>>a[j];
	   for(i=1;i<=a[j];i++)
	   {
		fact*=i;
	   }
	  f[j]=fact;
	}
	int count;
	for (i=0;i<n;i++)
	{
		temp=f[i];
		cout<<"\nfactorial:-"<<f[i];
		count=0;
		while(temp!=0)
		{
			if(temp%10==0)
			{
				count++;
				temp/=10;
			}
			else if(temp%10!=0)
			{
			 break;
			}
		}
		f[i]=count;
		cout<<" "<<f[i];
	}
	return 0;
//	getch();

}