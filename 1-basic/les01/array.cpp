#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;
// 程序使用了 setw() 函数来格式化输出。
// std::_Setw std::setw(int __n)
// +1 overload
// @brief Manipulator for @c width.
// @param __n The new width.
// Sent to a stream object, this manipulator calls @c width(__n) for
// that object.
int main ()
{
   int n[10]; // n 是一个包含 10 个整数的数组
   // 初始化数组元素          
   for (int i = 0; i < 10; i++ )
   {
      n[i] = i + 100; // 设置元素 i 为 i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
   // 输出数组中每个元素的值                     
   for ( int j = 0; j < 10; j++ )
   {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
   return 0;
}