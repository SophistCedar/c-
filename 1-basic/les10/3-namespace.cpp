#include <iostream>
using namespace std;
//命名空间嵌套

// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
   // 第二个命名空间
   namespace second_space{
      void func(){
         cout << "Inside second_space" << endl;
      }
   }
}
using namespace first_space::second_space;
int main ()
{
 
   // 调用第一个命名空间内部的第二个命名空间中的函数
   func();
   
   return 0;
}