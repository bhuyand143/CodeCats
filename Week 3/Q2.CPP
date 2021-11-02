//Program to print patterns using star
#include<iostream>
using namespace std;
int main(void)
{
	int n=5,i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}