//用数组做第2种方法

#include <stdio.h>
#define N  10

int main(void)
{
    int a[N],num,i,j,t;
    char b[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    printf("input n:");scanf("%d",&num);

    i = 0;
    while(num)
    {
        a[i++] = num % 10;
        num /= 10;
    }
   
   
   for(j = i - 1; j >= 0; j--)
   {
       t = a[j];
       printf("%s ",b[t]);
   }

   return 0;

}