#include <iostream>
using namespace std;

class Adder{
   public:
      // 构造函数
      Adder(int i = 0)
      {
        total = i;
      }
      // 对外的接口
      void addNum(int number)
      {
          total += number;
      }
      // 对外的接口
      int getTotal()
      {
          return total;
      };
   private:
      // 对外隐藏的数据
      int total;
};


int main( )
{
   Adder a; //定义一个对象
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
 
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}

// 公有成员 addNum 和 getTotal 是对外的接口，用户需要知道它们以便使用类。
// 私有成员 total 是用户不需要了解的，但又是类能正常工作所必需的。
// 设计策略
// 抽象把代码分离为接口和实现。所以在设计组件时，必须保持接口独立于实现，这样，如果改变底层实现，接口也将保持不变。
// 在这种情况下，不管任何程序使用接口，接口都不会受到影响，只需要将最新的实现重新编译即可。