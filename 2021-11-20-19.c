//输入一身份证号，输出这个人的生日。

#include <stdio.h>

int main(void)
{
    char ch;
    int count,i,n,year,month,day;

    count = 0;
    year = 0; month = 0; day = 0;
    
    while((ch=getchar())!='\n'&& ++count<=18)
    {
          if(count <=6 || count > 14) continue;
          
          if(count>6 && count < 11)
          {   
              n = ch - '0';
              year = year * 10 + n;
          }

          if(count >= 11 && count < 13 )
          {
              n = ch - '0';
              month = month * 10 + n;

          }

          if(count >= 13 && count < 15)
          {
              n = ch - '0';
              day = day * 10 +n;
          }

    }

    printf("出生年月:%d-%d-%d\n",year,month,day);

    return 0;
}