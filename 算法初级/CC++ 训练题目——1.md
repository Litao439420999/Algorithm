#  C/C++ 训练题目——1

**题目一：编写程序，从终端读取一个数字，然后使用英语逐位显示该数。**
例如，如果用户输入932，程序的输出如下∶nine three two
这里特别要求，如果用户输入0，那么程序应该显示zero（注意;这个练习有相当难度）

方法一：

```c
#include <stdio.h>

int main(void)
{
    int n,k,s=0,t,count=0;

    printf("input n:");scanf("%d",&n);
  
    while(n)
    {
       k = n % 10;
       s = s * 10 + k;
       n /= 10;
       count++;
    }

   
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

```



方法二：

```c
//用一维数组做
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

```

方法三：

```c
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
```



方法四：

```c
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

```



**题目二： 把 100～200 之间的不能被3整除的数按5个一组输出。**

```C 
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
```



**题目三：一个正整数与3的和是5的倍数，与3的差是6的倍数，编写一个程序求符合条件的最小数。**

```C
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x=1;

    while(x <= INT_MAX)
    {
        if( (x+3) % 5 == 0  && (x-3) % 6 == 0)
            {
                printf("%d\n",x);break;
            }

        x++;
    }
}
```



**题目四：小森今年12岁，他母亲比他大 20 岁，编写一个程序计算出他母亲在几年后比他的年龄大一倍，那时他们两人的年龄各是多少**

```C
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
```



**题目五：输入一身份证号，输出这个人的生日。**

```C
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
```



**题目六：前15个斐波纳契数列**

第一种方法：

```C
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
```

第二种方法：

```C++
#include  <stdio.h>

int main(void)
{
    int fib[20],i;
    

    for(i = 0;i < 20;i++)
    {
        if(i == 0)
            fib[i] = 0;
        else if(i == 1)
             fib[i] = 1;
        else
             fib[i] = fib[i-1] + fib[i-2];
    }

    for(i = 0;i < 20;i++)
    {
       if((i + 1) % 5 == 0)
          printf("%d\n",fib[i]);
        else
          printf("%d\t",fib[i]);
    }

    return 0;
}
```



**题目七：将一个正整数转换为其它进制数**

```C
#include <stdio.h>

int main(void)
{
    int baseDigits[16] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int convertedNumber[64];
    long int numberToConvert;
    int  nextDigit,base,index = 0;

    printf("Number to be converted?");
    scanf("%ld",&numberToConvert);
    printf("Base?");
    scanf("%d",&base);

    //转换
    do{
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert/base;
    }while(numberToConvert!=0);

    //输出
    printf("Converted number=");

    for(--index;index >= 0; --index)
    {
        nextDigit = convertedNumber[index];
        printf("%c",baseDigits[nextDigit]);
    }

    printf("\n");
    return 0;

}

```



**题目八：题目链接**：http://t.cn/E9gio39
并将此值从数组中去除，将剩下的数进行排序。 第二行将排序的结果输出。
示例1
输入：
4
1 3 4 2
输出：
4
1 2 3

```C++
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

vector<int>  numAarry;

int main()
{
    int n,num;

    while(scanf("%d",&n)!= EOF)
    {
        numAarry.clear();
        for(int i = 0; i < n; i++)
        {
             scanf("%d",&num);
        
            numAarry.push_back(num);
        }   
  

    	vector<int>:: iterator  numOfIterator;
    	sort(numAarry.begin(),numAarry.end());
    
   		 int num1 = numAarry[numAarry.size()-1];
   		 numAarry.pop_back();
   		 cout << num1 << endl;        
    
    	for(numOfIterator = numAarry.begin(); numOfIterator != numAarry.end();numOfIterator++)
       		 cout << *numOfIterator << " " ;
    }
    
    return 0;
}
```



**题目九：**编写一个递归函数 digitSum（n），它的参数为一个非负的整数，并且返回它的各位数字之和。

例如，调用 digitSum（1729）应该返回1＋7＋2＋9，也就是19。digitSum的递归实现依赖于这样一个事实，即非常容易通过除以10的方式来将一个整数分成两部分。

```C++
#include <iostream>
using namespace  std;

int digitSum(int num)
{   
    if(num ==0)
         return 0;
    else
       return   digitSum(num/10) + num % 10;      
}

int main(void)
{
    int num;

    cout<<"input num:"; cin>>num;

    cout<<"sum="<<digitSum(num)<<endl;
    return 0;
}

```



**题目十：定义一个递归函数**，求一个整数n的数根（digit root）被定义为∶重复地将其各位数相加直到保留最终的单个数字。
一个整数n的数根（digit root）被定义为∶重复地将其各位数相加直到保留最终的单个数字。

例如.1729可以用下面的步骤来计算它的数根∶

步骤1∶1+7+2+9→19 

步骤2∶1＋9→10 

步骤3∶1+0→1

```C++
#include <iostream>
using namespace std;

void digitroot(int num)
{   
    int s = 0;

    if(num>=10)
    { s = 0;
        while(num)
        {
           s += num % 10;
           num /= 10;
        }
        cout<<"sum:"<<s<<endl;;
         digitroot(s); 
       }
        
        
        
}

int main(void)
{
    int num;

    cout<<"num:";cin>>num;
    
    digitroot(num);

    return 0;
    
}

```



**题目十一：写一个函数返回参数二进制中 1 的个数**

```C
#include <stdio.h>

int count_one_bits(int m)
{
    int count = 0;

    while(m > 0)
    {
        if( m % 2)
        {
            count++;
        }

        m /= 2;
    }
   
   return count;
}

int main()
{
    int m;

    printf("请输入整数：\n");
    scanf("%d",&m);

    printf("%d\n",count_one_bits(m));
    
    return 0;
}
```

​                                                                                                                                                   

**题目十二：计算字符串中含有空格数。**

输入：
This is a book!

输出:
the space num is 3

```C
#include <stdio.h>

int count_space(char *str)
{
    int result = 0;

    if(str == NULL)
        return -1;

    while(*str){
        if(*str == ' ')
            result++;
        str++;
    }

    return result;
}

int main(void)
{
    
    char  str[30];
    gets(str);
    
    printf("the space num is %d\n",count_space(str));

    return 0;
}

```



**题目十三：两个数有多少个不同的位**

```C
#include <stdio.h>

int main()
{
   int x,y,count=0;

   printf("input x:");scanf("%d",&x);
   printf("input y:");scanf("%d",&y);

   while( x || y)
   {
	
		   if( x % 10 != y % 10 )
		    count++;


   
   x /= 10;
   y /= 10;
   
   }

   printf("有%d个不同的位\n",count);

   return 0;

}
```



**题目十四：求取一个数组最大K个数，返回k个数可以为任意排序**，假设数组元素有N个，
要求算法时间复杂度不大于O(N*log（K)），空间复杂度为O(1)。

输入：[3, 2, 1, 4, 5] , 2

输出：[5,4]

```C
#include <stdio.h>
int main(void)
{
  int a[5],n;
  int i,j,k,t;

  printf("input array_a:\n");

  for(i=0;i<5;i++)
	  scanf("%d,",&a[i]);

  printf("\n返回个数:");scanf("%d",&n);

  for(i=0;i<n;i++)
  {
     k = i;
	 for(j=i+1;j<5;j++)
		 if(a[k]<a[j]) k=j;

       t = a[i];
	   a[i] = a[k];
	   a[k] = t;

	   printf("%d\t",a[i]);
  
  }

return 0;


}
```



**题目十五：输出字符串中只出现一次字符**

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  firstUniqChar(char *s)
{
      int len = strlen(s);
      int temp[26] ={ 0 };
    int i;

    for(i=0;i<len;i++)
    {
        temp[s[i]-97] += 1;  //统计每个字符出现次数
    }

    for(i=0;i<len;i++)
    {
        if(temp[s[i]-97]==1)
           {
              printf("%c ",s[i]);
                continue;
             
           } 
    }

    
}

int  main()
{
     char  a[]="loveleetcode";
     firstUniqChar(a);

    return 0;
}
```



**题目十六：返回字符串中首个只出现一次字符**

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char firstUniqChar(char* s){
  int len=strlen(s);
  int temp[26] ={0};
  int i;
  for(i=0;i<len;i++){
    temp[s[i]-97]+=1;
  }
  for(i=0;i<len;i++){
    if(temp[s[i]-97]==1){
      break;
    }
  }
  return s[i];
}

int main(){
  char a[]="loveleetcode";
  printf("%c\n",firstUniqChar(a));
  return 0;
}


```

