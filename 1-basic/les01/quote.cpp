#include <iostream>
 
using namespace std;
// 试想变量名称是变量附属在内存位置中的标签，您可以把引用当成是变量附属在内存位置中的第二个标签。
// 因此，您可以通过原始变量名称或引用来访问变量的内容。
// 我们可以为 i 声明引用变量，如下所示：
// int&  r = i;
// double& s = d;
// 在这些声明中，& 读作引用。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，
// 第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"

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