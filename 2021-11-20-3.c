//前15个斐波纳契数列

#include  <stdio.h>

int main(void)
{
    int fib[20],i;

    fib[0] = 0;
    fib[1] = 1;

    for(i=2;i<20;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(i=0;i<20;i++)
    {
       if((i+1)%5==0)
        { printf("%d\n",fib[i]);continue; }  
       
        printf("%d\t",fib[i]);
    }

    return 0;
}