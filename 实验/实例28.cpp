#include<stdio.h>
int main()
{
    int year(int n);
    printf("%d",year(5));
}
int year(int n)
{
    int a;
    if(n<=1)
    {
        a=10;

    }
    else
    {
        a=year(n-1)+2;
        

    }
    return(a);
}