//Program to find out weather the input character is alphabet, digit or special character
#include<iostream.h>
#include<conio.h>
void main()
{
char c;
cin>>c;
if(c>=97 && c<=122 || c>=65 && c<=93)
cout<<"alphabet";
else if(c>=48 && c<=57)
cout<<"Digit";
else
cout<<"Special character";
getch();
}