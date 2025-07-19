#include<stdio.h>
int isleapyear(int year)
{
    if(year%4==0&&year%100!=0||year%400==0)//闰年判断规则
    {
        ruturn 1//ruturn会立即终止函数的执行
    }
    return 0
}
int main()
{
    int year,month,day;
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31}
    int today=0;
    printf("请输入年月日");
    scanf("%d %d %d",&year,&month,&day);
    for(int i=1;i<month;i++)
    {
        today=today+daysinmonth[i];
        
    }
    printf("%d",today=today+day);
}