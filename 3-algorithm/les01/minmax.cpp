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

    // 迭代器方法找最值，使用auto关键字自动推导类型
    vector<int>::iterator m1 = min_element(vec.begin(),vec.end());
    cout << *m1 << endl;
    auto m2 = max_element(vec.begin(),vec.end());
    cout << *m2 << endl;
    auto result = minmax_element(vec.begin(),vec.end());
    cout << *result.first << endl << *result.second << endl;

    // // 普通方法
    // int m3 = min({3,7,2,5,6,4,9});
    // cout << m3 << endl;
    // int m4 = max({3,7,2,5,6,4,9});
    // cout << m4 << endl;
    // pair<int,int> result2 = minmax({3,7,2,5,6,4,9});
    // cout << result2.first << endl << result2.second << endl;

    return 0;
}