//almost equivalent strings https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
#include<iostream>
using namespace std;
int main(void)
{
string s1,s2;
cout<<"\nNow Enter the datas (Two strings should be of same length)";
cout<<"\nEnter the string 1:-";
cin>>s1;
cout<<"\nEnter the string 2:-";
cin>>s2;
int pr1=0,pr2=0,diff=0,f=0;
for(char i='a';i<='z';i++ )
{
    pr1=pr2=diff=0;
for(int j=0;j<s1.size();j++)
{
    if(i==s1[j])
    pr1++;
}
for(int j=0;j<s2.size();j++)
{
    if(i==s2[j])
    pr2++;
}
diff=abs(pr1-pr2);
if(diff>3)
{
f=1;
break;
}
}
if(f==1)
cout<<"\nfalse";
else
cout<<"\ntrue";
return 0;
}