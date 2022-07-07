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
