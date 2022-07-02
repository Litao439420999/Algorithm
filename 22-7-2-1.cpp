//题目链接：http://t.cn/E9gio39
//并将此值从数组中去除，将剩下的数进行排序。 第二行将排序的结果输出。
//示例1
/*输入：
4
1 3 4 2
复制
输出：
4
1 2 3*/

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


