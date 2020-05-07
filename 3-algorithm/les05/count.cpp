#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsOdd (int i) { 
    return ((i%2)==1); 
}

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
    int ret;
    // 计算数值出现的次数
    ret = count(vec.begin(),vec.end(),0);
    cout << ret << endl;
    ret = count(vec.begin(),vec.end(),5);
    cout << ret << endl;

    // 计算奇数出现的次数
    ret = count_if(vec.begin(),vec.end(),IsOdd);
    cout << ret << endl;


    return 0;
}