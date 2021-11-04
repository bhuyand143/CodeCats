#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            printf(" ");
        }
        for ( k = 1; k<i*2; k++)
        {
            printf("*");
        }
     printf("\n");   
    }
    return 0;
}