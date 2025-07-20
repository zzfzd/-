#include<stdio.h>
int main()
{
    int a,b,c;
    int i=100;
    for(i;i<1000;i++)
    {
        a=i%10;
        b=(i%100-a)/10;
        c=(i-a-b)/100;
        if(i==a*a*a+b*b*b+c*c*c)
        printf("%d\n",i);
    }
}