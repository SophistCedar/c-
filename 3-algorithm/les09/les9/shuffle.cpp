#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <vector>
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
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    // Rearranges the elements in the range [first,last) randomly, using g as uniform random number generator.
    shuffle(vec.begin(), vec.end(),default_random_engine(seed) );
    for(itor=vec.begin(); itor != vec.end(); ++itor){
        cout << *itor << " ";
    }
    cout << endl;


    return 0;
}