//用数组做第一种方法
#include <stdio.h>
#define N  10

int main(void)
{
    int a[N],num,i,j;

    printf("input n:");scanf("%d",&num);

    i = 0;
    while(num)
    {
        a[i++] = num % 10;
        num /= 10;
    }
   
   //j = i - 1;

   for(j= i - 1; j >= 0 ;j--)
   {
       switch(a[j])
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
   }

   return 0;

}
