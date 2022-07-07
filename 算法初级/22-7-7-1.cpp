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