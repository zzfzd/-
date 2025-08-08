#include<stdio.h>
int main()
{
    int b=2,c;
    int i=1;
    float a=1,d,sum=0;
    for(i;i<=20;i++)
    {
        c=a+b;
        d=b/a;//ab都是整形结果会是一个整形，将其中一个改为浮点型
        sum+=d;
        a=b;
        b=c;    
    }
printf("%f",sum);
}