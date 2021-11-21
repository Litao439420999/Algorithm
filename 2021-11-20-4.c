//前15个斐波纳契数列

#include  <stdio.h>

int main(void)
{
    int fib[20],i;

    

    for(i=0;i<20;i++)
    {
        if(i==0)
            fib[i] = 0;
        else if(i==1)
             fib[i] = 1;
        else
             fib[i] = fib[i-1] + fib[i-2];
    }

    for(i=0;i<20;i++)
    {
       if((i+1)%5==0)
          printf("%d\n",fib[i]);
        else
           printf("%d\t",fib[i]);
    }

    return 0;
}