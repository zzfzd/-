#include<stdio.h>
int main()
{
    int j,i=1,sum;
    for(i;i<1000;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }

        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
}