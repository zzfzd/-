#include <stdio.h>
int main()
{
    int a,b=1;
    for (int i = 100; i < 200; i++)
    {
        for (int j = 2; j < i / 2; j++)
        {
             a = i % j;
             b = b * a;
        }
        if(b!=0)
        printf("%d\n",i);
        b=1;
    }
}