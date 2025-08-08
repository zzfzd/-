#include <stdio.h>
int main()
{
    int m, n, a;
    printf("请输入m n的值:");
    scanf("%d %d", &m, &n);
    while (1)
    {

        if (m >= n)
            a = m % n;
        else
            a = n % m;
        if (a == 0)
        {
            printf("最大公因数是；%d", n);
            break;
        
        }
        else
        {
            m = n;
            n = a;
        }
    }
}