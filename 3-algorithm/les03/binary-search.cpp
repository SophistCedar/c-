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
        vec.push_back(i*3);
    }
    cout << "向量的大小：" << vec.size() << endl;
    // 迭代器正向遍历
    vector<int>::iterator itor;
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;

    //判别是否排序完成
    bool ret;
    ret = is_sorted(vec.begin(),vec.end());
    cout << "is sorted? " << ret << endl;

    // 排序
    sort(vec.begin(),vec.end());
    // vector<int>::iterator itor;
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;
    
    ret = is_sorted(vec.begin(),vec.end());
    cout << "is sorted? " << ret << endl;

    // Returns true if any element in the range [first,last) is equivalent to val, and false otherwise.
    int i = 3;
    if(binary_search(vec.begin(),vec.end(),i)){
        cout << "found! " << i << endl;
    }else{
        cout << "not found! " << i << endl;
    }

    int j = 7;
    if(binary_search(vec.begin(),vec.end(),j)){
        cout << "found! " << j << endl;
    }else{
        cout << "not found! " << j << endl;
    }




    return 0;
}