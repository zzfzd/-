#include<stdio.h>
 
int main( )
{
    long a,b,c,d,e,x;
    printf("请输入 5 位数字：");
    scanf("%ld",&x);
    a=x/10000;        /*分解出万位*/
    b=x%10000/1000;   /*分解出千位*/
    c=x%1000/100;     /*分解出百位*/
    d=x%100/10;       /*分解出十位*/
    e=x%10;           /*分解出个位*/
    if (a==e&&b==d)
    {
        printf("是");
    
}else printf("不是");
}