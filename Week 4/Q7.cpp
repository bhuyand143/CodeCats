#include<iostream>
using namespace std;
int main(void)
{
    int t,x,n;
    cout<<"\n Input:-\n";
    cin>>t;
    int res[t];
    for(int j=0;j<t;j++)
    {
        cout<<"\nTest case "<<j+1<<" :-"<<endl;
        cin>>x;//initial position
        cin>>n;//no of jumps
        for(int i=1;i<=n;i++)
        {
          if(x%2==0)
          x=x-i;
          else if(x%2!=0)
          x=x+i;
          //cout<<x<<" ";
        }
        res[j]=x;
    }
    cout<<"\n Output:-\n";
    for(int j=0;j<t;j++)
    cout<<res[j]<<"\n";
    return 0;
}