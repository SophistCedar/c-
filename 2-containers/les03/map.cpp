#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <map>

using namespace std;

int main(void)
{
    // 初始化map
    map<int, string> m1 = { { 1, "guangzhou" }, { 2, "shenzhen" }, { 3, "changsha" } };
    map<char, string> m2; // 空map容器

    // 建立映射关系对，一个pair保存两个数据成员
    // pair实例化出来的类都有两个成员变量，一个是 first, 一个是 second。
    pair<char, string> p1('G', "guangzhou");
    pair<char, string> p2('S', "guangzhou");
    pair<char, string> p3('C', "changsha");

    // 插入数据
    m2.insert(p1);
    m2.insert(p2);
    m2.insert(p3);

    // 查看元素个数
    cout << "map容器m1元素个数：" << m1.size() << endl;
    cout << "map容器m2元素个数：" << m2.size() << endl;

    // 采用 [] 方式打印数据
    cout << m1[1] << " " << m1[2] << " " << m1[3] << endl;
    cout << m2['G'] << " " << m2['S'] << " " << m2['C'] << endl;

    // 迭代器正向方式遍历
    map<int, string>::iterator itor = m1.begin();
    for (; itor != m1.end(); itor++)
    {
        cout << itor->first << ","; // 键
        cout << itor->second << endl; // 值
    }

    // 迭代器反向方式遍历
    map<char, string>::reverse_iterator reitor = m2.rbegin();
    for (; reitor != m2.rend(); reitor++)
    {
        cout << reitor->first << ",";
        cout << reitor->second << endl;
    }

    // 清空容器
    m1.clear();
    m2.clear();

    return 0;
}

/*
关联容器(associative-container)和顺序容器有着根本的不同.
关联容器中元素定义是按关键字来保存和访问的。
与之相对，顺序容器中的元素是按他们在容器中的位置来顺序保存和访问的。
map : 关联数组；保存关键字-值对
set : 关键字即值，即只保存关键字的容器
*/

/*
(2)map常用函数
begin()：返回容器第一个元素的迭代器
end()：返回容器最后一个元素之后的迭代器
rbegin()：
rend()：
clear()：清除容器中所有元素
empty()：判断容器是否为空
insert(p1)：插入元素  p1 是通过pair函数建立的映射关系对
insert(pair<char, string>('S', "shenzhen"))： 插入元素
size()：返回容器中元素的个数
count()：返回指定键对应的数据的出现的次数
get_allocator()：返回map的配置器
swap()：交换两个map容器的元素
*/