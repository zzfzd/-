#include <stdio.h>
int main()
{
    int a, b=2, c;
    printf("输入需要因式分解的数：");
    scanf("%d", &a);
    while (a>1)
    {
        if(a%b==0)
        {
        printf("%d",b);
        a=a/b;       
        if(a!=1)
        printf("*");
        }
        else
        b++;//b的值确实在递增，但并不影响因子的因式分解
    }
    
}