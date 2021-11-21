//用递归方法

#include <stdio.h>

void  NumconvertToEng(int num)
{
    if(num!=0) 
     {    NumconvertToEng(num/10);

     switch( num % 10 )
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

}

int main(void)
{
    int num;

    printf("input num:");scanf("%d",&num);
    NumconvertToEng(num);

    return 0;

}

