#include <iostream>
#include <list>

using namespace std;
/*
list初始化
头尾插入元素，指定位置插入一个或多个元素
删除某个位置的元素，删除某个元素（存在的全部删除），清空列表元素
访问列表首尾元素的值，列表元素个数，判断列表是否为空
正向遍历列表，反向遍历列表 begin end rbegin rend
不支持[]方式和vector.at()
*/
int main(void)
{
    list<int> l1;

    // 插入元素方式演示
    l1.push_front(1);            // 头部插入
    l1.push_back(2);             // 尾部插入
    l1.insert(l1.begin(), 3);    // 开始位置插入
    l1.insert(l1.begin(), 2, 6);    // 开始位置插入2个6
    l1.insert(l1.end(), 4);      // 结束位置插入
    l1.insert(--l1.end(), 4);      // 结束位置前一个插入，只支持--，不支持-/+
    

    cout << "链表是否为空：" << l1.empty() << endl;
    cout << "list链表中元素个数：" << l1.size() << endl;
    cout << "list链表第一个元素：" << l1.front() << endl;
    cout << "list链表最后一个元素：" << l1.back() << endl;

    // 遍历链表正向
    list<int>::iterator itor = l1.begin();
    for (; itor != l1.end(); itor++)
        cout << *itor << " ";
    cout << endl;

    // 遍历链表逆向
    list<int>::reverse_iterator reitor = l1.rbegin();
    for (; reitor != l1.rend(); reitor++)
        cout << *reitor << " ";
    cout << endl;

    // 将链表排序
    l1.sort();
    itor = l1.begin();
    cout << "重新排序之后正向遍历：";
    for (; itor != l1.end(); itor++)
        cout << *itor << " ";
    cout << endl;

    // 将链表元素倒转
    l1.reverse();
    itor = l1.begin();
    cout << "倒转之后正向遍历：";
    for (; itor != l1.end(); itor++)
        cout << *itor << " ";
    cout << endl;

    // 删除元素
    l1.erase(--l1.end()); // 删除某个位置的元素(性能好)
    l1.remove(4); // 删除某个元素(和所给值相同的都删除)
    cout << "删除倒数第二个元素和元素4之后大小：" << l1.size() << endl;
    itor = l1.begin();
    cout << "删除之后正向遍历：";
    for (; itor != l1.end(); itor++)
        cout << *itor << " ";
    cout << endl;

    // 清除容器中的所有元素
    l1.clear();
    cout << "清除容器所有元素之后大小：" << l1.size() << endl;

    return 0;
}
/*
list: 双向链表。只支持双向顺序访问。在list中任何位置进行插入、删除操作速度都很快。
当需要添加数据的时候不会像vector那样，先将现有的内存空间释放，在次分配更大的空间，这样的话效率就比较低了。
list容器适用于少量读写，大量插入，删除的情况。
缺点：不能随机访问，不支持[]方式和vector.at()、占用的内存会多于vector（非有效数据占用的内存空间）
*/

/*
初始化list对象的方式
list<int> L0;    //空链表
list<int> L1(3);   //建一个含三个默认值是0的元素的链表
list<int> L2(5,2); //建一个含五个元素的链表，值都是2
list<int> L3(L2); //L3是L2的副本
list<int> L4(L1.begin(),L1.end());    //c5含c1一个区域的元素[begin, end]。
*/

/*
list常用函数
begin()：返回list容器的第一个元素的地址
end()：返回list容器的最后一个元素之后的地址
rbegin()：返回逆向链表的第一个元素的地址（也就是最后一个元素的地址）
rend()：返回逆向链表的最后一个元素之后的地址（也就是第一个元素再往前的位置）
front()：返回链表中第一个数据值
back()：返回链表中最后一个数据值
empty()：判断链表是否为空
size()：返回链表容器的元素个数
clear()：清除容器中所有元素
insert(pos,num)：将数据num插入到pos位置处（pos是一个地址）
insert(pos,n,num)：在pos位置处插入n个元素num
erase(pos)：删除pos位置处的元素
push_back(num)：在链表尾部插入数据num
pop_back()：删除链表尾部的元素
push_front(num)：在链表头部插入数据num
pop_front()：删除链表头部的元素
sort()：将链表排序，默认升序
*/