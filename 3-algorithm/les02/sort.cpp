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

    // // 通过数组定义vector的方法
    // double mydoubles[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
    // vector<double> myvector;
    // myvector.assign(mydoubles,mydoubles+8);
    // int myints[] = {9,8,7,6,5,4,3,2,1};
    // vector<int> myvector2(myints, myints+9);


    return 0;
}