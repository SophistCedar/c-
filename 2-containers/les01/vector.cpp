#include <iostream>
#include <vector>

using namespace std;
/*
初始化vector
尾部插入删除元素，指定位置插入删除元素（使用地址，位置：1 2 3 ...）
访问首元素的值或地址，访问尾元素的值及其后一位的地址
指定下标访问元素（下标：0 1 2 3...)
查看向量中元素的个数，向量是否为空，分配的存储容量大小。
*/
int main(void)
{
    vector<int> vec;//初始化vector对象

    // 尾部插入元素
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "向量的大小：" << vec.size() << endl;

    // 数组下标方式遍历vector
    for (unsigned int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    // 迭代器方式遍历vector
    // 使用 ！= 作为循环条件，因为所有的容器都重载了 == ！= 运算符
    vector<int>::iterator itor = vec.begin();
    for (; itor != vec.end(); ++itor)// 使用前置++而非后置++。 在迭代器中，前置++的效率高于后置++。
        cout << *itor << " ";
    cout << endl;

    //指定位置访问元素
    cout << "first element:" << vec.front() << endl;
    cout << "final element:" << vec.back() << endl;
    cout << "nth element:" << vec.at(2) << endl;//位置下标从0开始 这是第三个元素

    //删除/插入指定位置元素
    vec.pop_back();//删除尾部元素
    cout << "删除尾部元素后" <<"vec.size:" << vec.size() << endl;

    vec.erase(vec.begin() +1);//删除第二个元素
    cout << "删除指定位置元素后" <<"vec.size:" << vec.size() << endl;
    vec.insert(vec.begin() +2,8);//在第三个位置插入元素8
    cout << "插入指定位置元素后" <<"vec.size:" << vec.size() << endl;

    // 迭代器方式遍历vector
    itor = vec.begin();
    for (; itor != vec.end(); ++itor)
        cout << *itor << " ";
    cout << endl;

    return 0;
}

/*
vector是一种顺序性容器，可以不预先指定大小，会被自动分配空间，分配空间不够用也会自动扩展，可以看成是动态数组；
如果确定大小的话，预先指定大小，因为重新申请分配内存空间比较耗时；
创建vector的时候，在内存中分配一块连续的内存空间进行数据存储，因此仅在尾部插入删除效率高，其他位置插入删除效率比较低；
因此vector容器适用于大量读写，仅在尾部插入删除操作，其他位置修改较少的操作。
*/

/*
初始化vector对象的方法
vector<T> v1;        // 默认的初始化方式，内容为空
vector<T> v2(v1);    // v2是v1的一个副本
vector<T> v3(n, i)   // v3中包含了n个数值为i的元素
vector<T> v4(n);     // v4中包含了n个元素，每个元素的值都是0
*/

/*
(2)vector常用函数
empty()：判断向量是否为空，为空返回真，否则为假
begin()：返回向量（数组）的首元素地址
end()： 返回向量（数组）的末元素的下一个元素的地址
clear()：清空向量
front()：返回得到向量的第一个元素的数据
back()：返回得到向量的最后一个元素的数据
size()：返回得到向量中元素的个数
capacity():返回分配的存储容量大小
push_back(数据)：将数据插入到向量的尾部
pop_back()：删除向量尾部的数据
at(): 返回指向向量中位置为n的元素的引用。
*/