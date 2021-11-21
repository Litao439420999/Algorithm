//编写程序，从终端读取一个数字，然后使用英语逐位显示该数。
//例如，如果用户输入932，程序的输出如下∶nine three two
//这里特别要求，如果用户输入0，那么程序应该显示zero（注意;这个练习有相当难度）

#include <stdio.h>

int main(void)
{
    int n,k,s=0,t,count=0;

    printf("input n:");scanf("%d",&n);
   //t = n;
    while(n)
    {
       k = n % 10;
       s = s * 10 + k;
       n /= 10;
       count++;
    }

   // printf("%d,%d\n",s, t);
   k = 0;
   while(s)
   {   
       t =  s % 10;
       switch( t )
       {
           case 0: printf("zero ");break;
           case 1: printf("one "); break;
           case 2: printf("two "); break;
           case 3: printf("three ");break;
           case 4: printf("four "); break;
           case 5: printf("five "); break;
           case 6: printf("six ");break;
           case 7: printf("seven ");break;
           case 8: printf("eight ");break;
           case 9: printf("nine ");break;
       }
       s /= 10;
       k++;
   }

   while(k++<count)
        printf("zero ") ;
   
    return 0;

}