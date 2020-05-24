#include <iostream>
using namespace std;
// 试想变量名称是变量附属在内存位置中的标签，您可以把引用当成是变量附属在内存位置中的第二个标签。
// 因此，您可以通过原始变量名称或引用来访问变量的内容。
// 我们可以为 i 声明引用变量，如下所示：
// int&  r = i;
// double& s = d;
// 在这些声明中，& 读作引用。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，
// 第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"

//引用和常量指针很类似，常量指针指的是指针本身的指向不可改变
//引用也是如此，指的是初始化的时候变量的应用，不能是别的变量的应用
//常引用指的是不能通过引用对目标变量的值进行修改，从而使引用的目标成为const，达到了引用的安全，相当于常量指针指向常量
// int a;
// int &ra = a;//引用，可以通过改变ra改变a的值，取地址的话&ra与&a相等。
// const int &ra = a;//常引用，ra不可改变，但是对被引用对象 a 本身仍然可以修改。

// int b;
// int *pb = &b;//指针，可以通过 pa 指向a，修改a的值
// int const *pb = &b; //指针pb本身不可改变，pb只能指向 b，和引用很类似.
// 它不能在指向别的变量，但指向（变量）的值可以修改。 

// const int c;
// const int * const pc = &c;//pc只能指向c，不能再指向别的常量，指向的值也不能修改。

int main ()
{
   // 声明简单的变量
   int    i;
   double d;
 
   // 声明引用变量, must be init when define
   int&    r = i;
   double& s = d;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;
   
   return 0;
}