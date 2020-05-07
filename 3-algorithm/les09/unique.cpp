#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    // 定义一个向量
    vector<int> vec;
    for(int i = 0; i < 5; i++){
        vec.push_back(i);
        vec.push_back(i);
    }
    cout << "向量的大小：" << vec.size() << endl;
    // 迭代器正向遍历
    vector<int>::iterator itor;
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;

    
    // return An iterator designating the end of the resulting sequence.
    auto it = unique(vec.begin(), vec.end());
    // unique之后必须resize，否则vec分配的内存空间不变，但是删除了一些重复值，元素迁移，后面可能重复的元素仍然保持着
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;

    vec.resize(distance(vec.begin(),it)); 
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;

    return 0;
}