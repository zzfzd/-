#include<stdio.h>
int main()
{
    int a=1,b=1,i,d;
    for(i=3;i<=40;i++)
    {
        d=a+b;
        a=b;
        b=d;
        printf("%d ",d);
        if(i%4==0)
        printf("\n");
    }
    
}