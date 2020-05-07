#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

/*

迭代器可以指向容器中的某个元素，通过迭代器就可以读写它指向的元素。
迭代器定义
使用迭代器遍历容器：正向和反向
操作迭代器：前进或后退  advance
迭代器间距离，差几个元素  distance 注意死循环
交换迭代器所指的数据   iter_swap

*/
int main()
{
    vector<int> v;  //v是存放int类型变量的可变长数组，开始时没有元素
    for (int n = 0; n<5; ++n)
        v.push_back(n);  //push_back成员函数在vector容器尾部添加一个元素

    vector<int>::iterator i;  //定义正向迭代器  容器类名::iterator  迭代器名
    for (i = v.begin(); i != v.end(); ++i) {  //用迭代器遍历容器
        cout << *i << " ";  //*i 就是迭代器i指向的元素
        *i *= 2;  //每个元素变为原来的2倍
    }
    cout << endl;

    //用反向迭代器遍历容器
    vector<int>::reverse_iterator j;
    for (j= v.rbegin(); j != v.rend(); ++j)//使用前置运算符，后置++要多生成一个局部对象 tmp，因此执行速度比前置的慢。
        cout << *j << " ";
    cout << endl;




    // 链表
    int a[5] = { 1, 2, 3, 4, 5 };//数组
    //链表初始化
    list <int> lst(a, a+5);
    //定义迭代器
    list <int>::iterator p = lst.begin();
    //操作迭代器
    advance(p, 2);  //p向后移动两个元素，指向第三个元素
    cout << "1)" << *p << endl;  //输出 1)3
    advance(p, -1);  //p向前移动一个元素，指向2
    cout << "2)" << *p << endl;  //输出 2)2

    // 查看两个迭代器间差距
    // distance(p, q)：计算两个迭代器之间的距离，
    // 即迭代器 p 经过多少次 + + 操作后和迭代器 q 相等。如果调用时 p 已经指向 q 的后面，则这个函数会陷入死循环。
    list<int>::iterator q = lst.end();
    q--;  //q 指向 5
    cout << "3)" << distance(p, q) << endl;  //输出 3)3


    iter_swap(p, q); //交换迭代器所指的元素位置，此例是交换 2 和 5
    cout << "4)";
    for (p = lst.begin(); p != lst.end(); ++p)
        cout << *p << " ";
    cout << endl;
    return 0;
}