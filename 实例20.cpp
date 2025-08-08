#include<stdio.h>
float ban(float a);
float b=100;
int main()
{
    float  sum=0,i;
    for(i=1;i<11;i++)
    {
        sum+=b;
        b=ban(b);
    }
    printf("%f %f",b,sum);
}
float ban(float a)
{
    
    a=a/2;
    return a;

}