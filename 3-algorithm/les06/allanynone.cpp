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

    if (all_of(vec.begin(), vec.end(), [](int i){return i>=0;})){
        cout << "All the elements are not minus numbers.\n";
    }
    if (any_of(vec.begin(), vec.end(), [](int i){return i>10;})){
        cout << "There are elements that are greater than 10.\n";
    }
    if (none_of(vec.begin(), vec.end(), [](int i){return i<0;})){
        cout << "There are no negative elements in the range.\n";
    }   

    return 0;
}