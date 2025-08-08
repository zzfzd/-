#include<stdio.h>
int main()
{
    int x;
    char y;
    printf("请输入成绩");
    scanf("%d",&x);
    y=(x>=90)?'A':(x<60)?'C':'B';
    printf("%c",y);
}