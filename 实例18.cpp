#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("请输入a,b的值");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        sum=sum+a;
        a=a*10;
    }
    printf("%d",sum);
    return 0;
}