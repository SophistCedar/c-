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


    // find查找
    // Returns an iterator to the first element in the range [first,last) that compares equal to val. 
    // If no such element is found, the function returns last.
    vector<int>::iterator it;
    int i = 1;
    int j = 7;
    it = find (vec.begin(), vec.end(), i);
    if (it != vec.end()){
        cout << "Element found in vec: " << *it << '\n';
        cout << "Element found in vec position: " << distance(vec.begin(),it) << '\n';
    }
    else{
        cout << "Element not found in vec\n";
    }
    it = find (vec.begin(), vec.end(), j);
    if (it != vec.end()){
        cout << "Element found in vec: " << *it << '\n';
        cout << "Element found in vec position: " << distance(vec.begin(),it) << '\n';
    }
    else{
        cout << "Element not found in vec\n";
    }

    // find if 
    // An iterator to the first element in the range for which pred does not return false.
    // If pred is false for all elements, the function returns last
    it = find_if (vec.begin(), vec.end(), IsOdd);
    if (it != vec.end()){
        cout << "The first odd value is " << *it << '\n';
    }
    // find if not
    // An iterator to the first element in the range for which pred returns false.
    // If pred is true for all elements, the function returns last.
    it = find_if_not (vec.begin(), vec.end(), IsOdd);
    if (it != vec.end()){
        cout << "The first not odd value is " << *it << '\n';
    }

    return 0;
}