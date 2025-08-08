#include<stdio.h>
int main()
{
    int x,y,z;
    int a,b,c;
    a=1;
    b=2;
    c=3;
    for(x=1;x<4;x++)
    {
        if(x!=a&&x!=c)
        {
            for(y=1;y<4;y++)
            {
            for(z=1;z<4;z++)
            {
                if(z!=c&&x!=z&&x!=y&&y!=z)
                printf("%d %d %d",x,y,z);
            }
            }
        }
    }
    
}