#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

//类模板
template <class T>//<>括号中的参数叫模板形参
class Stack { 
  private: 
    vector<T> elems;     // 使用向量实现栈数据结构

  public: 
    void push(T const&);      // 入栈，函数模板
    void pop();               // 出栈
    T top() const;            // 返回栈顶元素，函数模板
    bool empty() const{       // 如果为空则返回真。
        return elems.empty(); 
    } 
}; 

template <class T>
void Stack<T>::push (T const& elem) 
{ 
    // 追加传入元素的副本
    elems.push_back(elem);    
} 

template <class T>
void Stack<T>::pop () 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::pop(): empty stack"); 
    }
    // 删除最后一个元素
    elems.pop_back();         
} 

template <class T>
T Stack<T>::top () const 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::top(): empty stack"); 
    }
    // 返回最后一个元素的副本 
    return elems.back();      
} 

int main() 
{ 
    try { 
        Stack<int>    intStack;  // int 类型的栈 
        Stack<string> stringStack;    // string 类型的栈 
 
        // 操作 int 类型的栈 
        intStack.push(7); 
        cout << intStack.top() <<endl; //top和pop可能抛出异常
 
        // 操作 string 类型的栈 
        stringStack.push("hello"); 
        cout << stringStack.top() << std::endl; 
        stringStack.pop(); 
        stringStack.pop(); 
    } 
    catch (exception const& ex) { //捕获所有抛出的异常的常引用，exception: Base class for all library exceptions.
        cerr << "Exception: " << ex.what() <<endl; //在这里，what() 是异常类提供的一个公共方法，它已被所有子异常类重载。这将返回异常产生的原因。
        return -1;
    } 
}