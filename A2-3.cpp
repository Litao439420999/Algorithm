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
