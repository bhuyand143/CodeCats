//Program to count the no of notes in a given amount
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int amount,remain,nos[11],notes[11]={2000,1000,500,200,100,50,20,10,5,2,1};
	cout<<"Enter the amount:";
	cin>>amount;
	for(int i=0;i<11;i++)
	{
	nos[i]=0;
	}
	if (amount>=2000)
	{
	 remain=amount%2000;
	 nos[0]=amount/2000;
	 amount=remain;
	}
	if (amount>=1000)
	{
	 remain=amount%1000;
	 nos[1]=amount/1000;
	 amount=remain;
	}
	if (amount>=500)
	{
	 remain=amount%500;
	 nos[2]=amount/500;
	 amount=remain;
	}
	if (amount>=200)
	{
	 remain=amount%200;
	 nos[3]=amount/200;
	 amount=remain;
	}
	if (amount>=100)
	{
	 remain=amount%100;
	 nos[4]=amount/100;
	 amount=remain;
	}
	if (amount>=50)
	{
	 remain=amount%50;
	 nos[5]=amount/50;
	 amount=remain;
	}
	if (amount>=20)
	{
	 remain=amount%20;
	 nos[6]=amount/20;
	 amount=remain;
	}
	if (amount>=10)
	{
	 remain=amount%10;
	 nos[7]=amount/10;
	 amount=remain;
	}
	if (amount>=5)
	{
	 remain=amount%5;
	 nos[8]=amount/5;
	 amount=remain;
	}
	if (amount>=2)
	{
	 remain=amount%2;
	 nos[9]=amount/2;
	 amount=remain;
	}
	if (amount>=1)
	{
	 remain=amount%1;
	 nos[10]=amount/1;
	 amount=remain;
	}
	for(i=0;i<11;i++)
	{
		cout<<"No of notes of "<<notes[i]<<" are :-"<<nos[i]<<endl;
	}
	getch();


}