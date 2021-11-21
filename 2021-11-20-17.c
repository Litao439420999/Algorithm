//小森今年12岁，他母亲比他大 20 岁，编写一个程序计算出他母亲在几年后比他的年龄大一倍，那时他们两人的年龄各是多少
#include <stdio.h>

int main(void)
{
    int  xiaoSen=12, mother=30;
    int  i =1;

    do{
         if( ( mother + i)%(xiaoSen+i) == 0 )
            {  printf("%d年后，xiaoSen:%d\tmother:%d\n", i,xiaoSen + i, mother + i); }
    }while(++i<50);

    return 0;
}