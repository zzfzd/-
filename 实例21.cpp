#include<stdio.h>
int main()
{
    int a=1,b;
    for(int i=1;i<10;i++)
    {
        
        b=(a+1)*2;
        a=b;
    }
    printf("%d",a);
    return 0;
}