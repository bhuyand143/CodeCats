#include<iostream.h>
#include<conio.h>
void main()
{
	int p,c,b,m,cs,perc;
	cin>>p>>c>>b>>m>>cs;
	perc=((p+c+b+m+cs)*100)/500;
	cout<<"Percentage:"<<perc<<endl;
	if (perc>=90)
    	cout<<"Grade A";
    else if(perc>=80)
    	cout<<"Grade B";
    else if(perc>=70)
    	cout<<"Grade C";
    else if(perc>=60)
    	cout<<"Grade D";
    else if(perc>=40)
    	cout<<"Grade E";
    else
    	cout<<"Grade F";
    getch();
}