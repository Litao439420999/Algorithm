// 把 100～200 之间的不能被3整除的数按5个一组输出。

#include <stdio.h>

int main(void)
{
    int num,count=0;

    for(num=100;num<201;num++)
    {
         if(num%3==0)continue;

        
         printf("%d\t",num);
         
         if(++count%5==0)
            printf("\n");
          
    }

    return 0;
}