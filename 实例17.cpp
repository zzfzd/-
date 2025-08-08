#include<stdio.h>
int main()
{
    char c;
    int zi=0,shu=0,kong=0,qi=0;
    printf("请输入一段字符");
    while((c=getchar())!='\n')
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        zi++;
        else if(c>='0'&&c<='9')
        shu++;
        else if(c==' ')
        kong++;
        else 
        qi++;
        

    }
    printf("字母%d 数字%d 空格%d 其他%d",zi,shu,kong,qi);

}