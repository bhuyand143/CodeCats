//coin flip game:- https://discuss.codechef.com/t/conflip-editorial/866
#include<iostream>
using namespace std;
int main(void)
{
    int test,game,initial,noc,guess,d=0;//noc=no of coin
    cout<<"\nTest case";
    cin>>test;//input for test case
    cout<<"\nNo of games:-";
    cin>>game;//input for the number of games played
    int gamer[game];
    for(int i=0;i<test;i++)
    {
        cout<<"Test case "<<i+1<<":-"<<endl;
        for(int j=0;j<game;j++)
        {
        int count =0;    
        cin>>initial;
        cin>>noc;
        cin>>guess;
        int ar[noc];
        for ( int k = 0; k < noc; k++)
        {
           ar[k]=initial; 
        }
        for ( int k = 0; k < noc; k++)
        {
           for(int l=0;l<=k;l++)
           {
               if(ar[l]==1)
               ar[l]=2;
               else if(ar[l]==2)
               ar[l]=1;
           } 
        }
         for ( int k = 0; k < noc; k++)
        {
           if(ar[k]==guess)
            count++;
        }   
        gamer[d]=count;
        d++;
        }
        cout<<"\nResult:-";
        for ( int k = 0; k<d; k++)
        {
        cout<<gamer[k]<<" " ;
        }
    }

    return 0;
}