#include <iostream>
#include <set>  //使用set须包含此文件

using namespace std;
/*
集合初始化，集合内部元素自动升序排序
插入一个元素，插入多个元素
判断插入元素是否成功
查看集合元素个数，是否为空
正向遍历，反向遍历
*/
int main()
{
    //定义set
    set<int> st;
    //插入元素    
    for(int i=0;i<5;++i){
        st.insert(5-i);
    }//元素内部自动升序排序

    // 查看属性信息
    cout << "st.empty() " << st.empty() << endl;
    cout << "st.size() " << st.size() << endl;
    cout << "st.max_size() " << st.max_size() << endl;

    //正向遍历
    set<int>::iterator itor = st.begin();
    for(;itor != st.end();++itor){
        cout << *itor << ' ';
    }
    cout << endl;

    //反向遍历
    set<int>::reverse_iterator ritor = st.rbegin();
    for(;ritor != st.rend();++ritor){
        cout << *ritor << ' ';
    }
    cout << endl;

    // 检查元素是否被插入，set内是否已经有该元素了
    // pair实例化出来的类都有两个成员变量，一个是 first, 一个是 second。
    pair<set<int>::iterator,bool> ret; 
    ret = st.insert(2);               // no new element inserted
    if(!ret.second){
        cout << "no element inserted" << endl;
    }else{
        cout << "inserted element:" << *ret.first << endl;
    }
    ret = st.insert(10);               // no new element inserted
    if(!ret.second){
        cout << "no element inserted" << endl;
    }else{
        cout << "inserted element:" << *ret.first << endl;
    }

    int myints[] = {20,300,40};
    st.insert(myints,myints+3);//参数包括位置和数据
    //正向遍历
    itor = st.begin();
    for(;itor != st.end();++itor){
        cout << *itor << ' ';
    }
    cout << endl;

    return 0;
}