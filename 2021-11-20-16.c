//一个正整数与3的和是5的倍数，与3的差是6的倍数，编写一个程序求符合条件的最小数。
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x=1;

    while(x <= INT_MAX)
    {
        if( (x+3) % 5 == 0  && (x-3) % 6 == 0)
            {
                printf("%d\n",x);break;
            }

        x++;
    }
}