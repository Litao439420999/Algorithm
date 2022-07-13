# **multiset 多重集合容器**



multiset 与 set 一样，也是使用红黑树来组织元素数据的，***唯一不同的是，multiset 允许重复的元素键值插入，而 set 则不允许***。下图是multiset 容器内部结构示意图。

![](H:\迅雷云盘\云盘缓存\2022-07-10 152338.png)

**multiset也需声明头文件包含"#include<set>"**，由于它包含重复元素，所以，在插入元素、删除元素、查找元素上较 set有差别。



**1 multiset元素的插入**

```c++
#include <set>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    multiset<string> ms;
    
    ms.insert("abc");
    ms.insert("123");
    ms.insert("111");
    ms.insert("aaa");
    ms.insert("123");

    multiset<string>:: iterator it;
    for(it = ms.begin(); it != ms.end(); it++)
        cout << *it  << endl;
    
    return 0;

}
```

运行结果：

111
123
123
aaa
abc



**2 multiset 元素的删除**

采用 erase（）方法可以删除 multiset 对象中的某个迭代器位置上的元素、某段迭代器区间中的元素、键值等于某个值的所有重复元素，**并返回删除元素的个数**。采用 clear（）方法可以清空元素。

```c++
#include <set>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    multiset<string> ms;
    
    ms.insert("abc");
    ms.insert("123");
    ms.insert("111");
    ms.insert("aaa");
    ms.insert("123");

    multiset<string>:: iterator it;
    for(it = ms.begin(); it != ms.end(); it++)
        cout << *it  << endl;

    int n = ms.erase("123"); // 删除值为“123”的所有重复元素，返回删除元素总是2
    cout << "Total delete:" << n << endl;

    //删除元素后的剩余元素
    cout << "all elements after deleted:" << endl;
    for(it = ms.begin(); it != ms.end(); it++)
        cout << *it  << endl;
    
    return 0;

}
```

运行结果：

111
123
123
aaa
abc
Total delete:2
all elements after deleted:
111
aaa
abc



**3 查找元素**

使用 find（）方法查找元素，**如果找到，则返回该元素的迭代器位置（如果该元素存在重复，则返回第一个元素重复元素的迭代器位置）;如果没有找到，则返回 end（）迭代器位置。**

```c++
#include <set>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    multiset<string> ms;
    
    ms.insert("abc");
    ms.insert("123");
    ms.insert("111");
    ms.insert("aaa");
    ms.insert("123");

    multiset<string>:: iterator it;
    
    it = ms.find("123");
    if(it != ms.end())
        cout << *it << endl;
    else
        cout << "not find it!" << endl;

    it = ms.find("bbb");
    if(it != ms.end())
        cout << *it << endl;
    else
        cout << "not find it!" << endl;
    return 0;

}
```

运行结果：

123
not find it!

