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