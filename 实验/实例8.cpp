#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<10;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d*%d ",i,j);
    }
    printf("\n");
}
}