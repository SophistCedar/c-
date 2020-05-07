#include <iostream>
#include <string>
 
using namespace std;

// 模板是一种对类型进行参数化的工具；
// 通常有两种形式：函数模板和类模板；
// 函数模板针对仅参数类型不同的函数；
// 类模板针对仅数据成员和成员函数类型不同的类。

//函数模板
//在模板定义语法中关键字class与typename关键字的作用全然一样。
//关键字inline与函数定义放在一起能使函数成为内联函数,这样可以解决一些频繁调用的函数大量消耗栈空间（栈内存）的问题。
template <class T> //<>括号中的参数叫模板形参，不能为空。 T是占位符类型名称，可以在函数定义中被使用
inline T const& Max (T const& a, T const& b) // 函数返回值是常引用，函数参数也是常引用，使用占位符修饰类型
{ 
    return a < b ? b:a; 
} 
int main ()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 
 
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
 
   return 0;
}