#include<stdio.h>
int main()
{
    int i=5;
    printf("请输入5个字符");
    void palin(int n);
    palin(i);
}
void palin(int n)
{
    char next;
    if(n<=1)
    {
        next=getchar();
        putchar(next);
    }
    else
    {
        next=getchar();
        palin(n-1);
        putchar(next);

    }

}