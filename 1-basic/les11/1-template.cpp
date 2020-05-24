#include <iostream>
#include <string>

using namespace std;
//模板解决类型参数化问题，使用占位符代表数据类型
//函数模板有时候能起到比函数重载更简单的作用
//模板可以修饰形参的数据类型，返回值也可以修饰
//函数重载可以修饰形参，不仅是类型，个数和顺序也可以额重载，但是不能改变返回值
//函数重载：同名函数，但是函数形参不同（个数，类型，顺序）


// 模板是一种对类型进行参数化的工具；
// 通常有两种形式：函数模板和类模板；
// 函数模板针对仅参数类型不同的函数；
// 类模板针对仅数据成员和成员函数类型不同的类。

//函数模板
//在模板定义语法中关键字class与typename关键字的作用全然一样。
//关键字inline与函数定义放在一起能使函数成为内联函数,这样可以解决一些频繁调用的函数大量消耗栈空间（栈内存）的问题。
template <class T> //<>括号中的参数叫模板形参，不能为空。 T是占位符类型名称，可以在函数定义中被使用
//引用作函数参数和返回值，类型使用模板占位符修饰
inline T const& Max (T const& a, T const& b) // 函数返回值是常引用，函数参数也是常引用，使用占位符修饰类型
{ 
    return a < b ? b:a;//返回最大值
}

int main ()
{
    //此时 T 为 int
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 

    //此时 T = double
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

    //此时 T 为 string
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

   return 0;
}