

### 算法题：Specialized Four-Digit Numbers

找到并列出所有具有如下特性的十进制的4位数字：4位数字的和等于这个数字以十六进制表示时的4位数字的和，也等于这个数字以十二制表示时的4位数字的和。

举例： 整数2991（十进制）的4位数字之和是2+9+9+1 = 21， 2991 = 1*1728 + 8 * 144 + 9 * 12 + 3；

![POJ2196](C:\Users\李涛\Pictures\Saved Pictures\考试题目截图\POJ2196.png)

代码如下：

```c++
#include <cstdio>
using namespace std;

int sumOfDigital(int num, int base)
{
     int sum = 0;

     while(num)
     {
         sum += num % base;
         num /= base;
     }
    
     return sum;

}

int main()
{
    int n, s1 = 0, s2 = 0, s3 = 0;

    for(n = 1000; n < 10000; n++)
    {
        s1 = sumOfDigital(n,10);
        s2 = sumOfDigital(n,16);
        s3 = sumOfDigital(n,12);
    
        if(s1 == s2 && s2 == s3)
           printf("%d\n",n);
    }
    
    return 0;

}
```

### 题目：Quicksum

​		本题请你实现一个名为Quicksum的校验算法。Quicksum的数据包只包含大写字母和空格，以大写字母开始和结束，空格和字母可以以任何组合出现，可以有连续的空格。

​		Quicksum计算在数据包中每个字符的位置与字符的对应值的乘积的总和。空格的对应值为0,字母的对应值是它们在字母表中位置。 A = 1，B= 2,依次类推，Z = 26。

如计算ACM 如下：

ACM = 1 * 1 + 2 * 3 + 3 * 13 = 46

![POJ3094](C:\Users\李涛\Pictures\Saved Pictures\考试题目截图\POJ3094.png)

代码如下：

```c++
#include <cstdio>
#include <cstring>
using namespace std;

int  SumOfCharater(char s[])
{
    int sum = 0;


for(int i = 0; i < strlen(s); i++)
{
    if(s[i]!=' ')
        sum += (s[i] - 'A' + 1) * (i + 1);
}

return sum;


}

int main()
{
    char  st[255];

    gets(st);    

while(strcmp(st,"#") != 0)
{
    int  n = SumOfCharater(st);

    printf("%d\n",n);

    gets(st);
}

return 0;
 

}
```



#include <cstdio>
#include <cstdlib>
using namespace std;

int isPrime(int num)
{
    int  i,flag = 1;

    for(i = 2; i < num ; i++)
        if( num % i == 0 )
             {
                flag = 0;break; ;
             }
    return flag;
}

void reNOfPrime(int  a, int d, int count)
{
    int num,c = 0;



    num = a ;
    while(num)
    {    
         if(isPrime(num) == 1)        
         {
            c++; 
            if(c == count) 
            {
                printf("%d",num); return;
            }
         }   
         num = num + d;    
    }

}

int main()
{
    int a,d,n;
    scanf("%d%d%d",&a,&d,&n);
    while( a || d || n)
    {
              
       reNOfPrime(a,d,n);
       scanf("%d%d%d",&a,&d,&n);
    }
    
    return 0;
}

### 题目：POJ3006

![POJ3006](C:\Users\李涛\Pictures\Saved Pictures\考试题目截图\POJ3006.png)

代码如下：

```c++
#include <cstdio>
#include <cstdlib>
using namespace std;

int isPrime(int num)
{
    int  i,flag = 1;

    for(i = 2; i < num ; i++)
        if( num % i == 0 )
             {
                flag = 0;break; ;
             }
    return flag;

}

void reNOfPrime(int  a, int d, int count)
{
    int num,c = 0;



    num = a ;
    while(num)
    {    
         if(isPrime(num) == 1)        
         {
            c++; 
            if(c == count) 
            {
                printf("%d",num); return;
            }
         }   
         num = num + d;    
    }

}

int main()
{
    int a,d,n;
    scanf("%d%d%d",&a,&d,&n);
    while( a || d || n)
    {
              

       reNOfPrime(a,d,n);
       scanf("%d%d%d",&a,&d,&n);
    }
    
    return 0;

}
```

