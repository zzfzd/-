#include<stdio.h>
int a(int n);
int main()
{
   
   printf("%d",a(5));
}
int a(int n)
{
    int b;
    if(n==0)
    b=1;
    else if (n!=0)
    {
       b=n*a(n-1);
    }
    
    return b;
}