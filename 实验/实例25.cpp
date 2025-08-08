#include<stdio.h>
int main()
{
    
    unsigned long long sum=1,sum1=0;
    for(int i=1;i<21;i++)
    {
        sum=1;
        for(int j=1;j<=i;j++)
        {
            sum*=j;

        }
        sum1+=sum;

    }
    printf("%llu",sum1);
 return 0;
}