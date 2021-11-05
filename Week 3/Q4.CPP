/*program to print  following pattern
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/
#include<iostream>
using namespace std;
int main(void)
{
    int n=9,k,l,m;
    k=n;
    for(int i=0;i<n;i++)
    {   if(i<=n/2)
        {   
        for(l=0;l<i;l++)
        cout<<" ";
        }
         if(i>n/2)
        {   
        for(l=i;l<n-1;l++)
        cout<<" ";
        }
         
        cout<<"*";
        for(int j=0;j<k-2;j++)
        cout<<" ";
        if(i<n/2)
        k-=2;
        if(i>n/2)
        k+=2;
        if(i==n/2)
        {
            cout<<"\n";
            k+=2;
            continue;
        }
        cout<<"*";
        cout<<"\n";
        
    }    
    return 0;
}