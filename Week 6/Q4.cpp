//Converting roman to integer
#include<iostream>
#include<string>
#include<process.h>
using namespace std;
int main(void)
{ 
char roman[7] ={'I','V','X','L','C','D','M'};
int num[7]={1,5,10,50,100,500,1000};
int n;
string s;
cout<<"\nEnter the roman string:-";
cin>>s;
n=s.size();
int a[n];
for(int i=0;s[i]!='\0';i++)
{
    for(int j=0;j<7;j++)
    {
        if(s[i]==roman[j])
        {
            a[i]=num[j]; 
        }
    }
}
int sum=0;
for(int i=0;i<n;i++)
{
    switch(a[i])
    {
        case 1:
           if((a[i+1]==5||a[i+1]==10 )&& i+1<n)
            {
                sum +=(a[i+1]-a[i]);
                i++;
                break;
            }
            sum+=a[i];
            break;           
        case 5:
            sum+=a[i];
            break;  
        case 10:
        if((a[i+1]==50||a[i+1]==100 )&& i+1<n)
            {
                sum +=(a[i+1]-a[i]);
                i++;
                break;
            }
            sum+=a[i];
            break;  
        case 50:
            sum+=a[i];
            break;  
        case 100:
        if((a[i+1]==500||a[i+1]==1000 )&& i+1<n)
            {
                sum +=(a[i+1]-a[i]);
                i++;
                break;
            }
            sum+=a[i];
            break;         
        case 500:
            sum+=a[i];
            break;  
        case 1000:
            sum+=a[i];
            break;  
        default:
        cout<<"Not a roman number";
        exit(0);       
        break;
    }
}
cout<<"Result is "<<sum;
return 0;
}
