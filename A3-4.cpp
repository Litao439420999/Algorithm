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