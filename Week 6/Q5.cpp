//Jewel and Stones
#include<iostream>
using namespace std;
int main(void)
{
     string jewel,stones;
     cout<<"Enter the jewels:- ";
     cin>>jewel;
     cout<<"Enter the stones:- ";
     cin>>stones;
     int k=0;
     for(int i=0;i<jewel.size();i++)
     {
         for(int j=0;j<stones.size();j++)
         {
             if(jewel[i]==stones[j])
             k++;
         }
     }
     cout<<"Output:-"<<k;
     return 0;
}