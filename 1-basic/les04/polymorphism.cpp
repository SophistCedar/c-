#include <iostream> 
using namespace std;
// 多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
// C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。
// 此时，编译器看的是指针的内容，而不是它的类型。因此，由于 tri 和 rec 类的对象的地址存储在 *shape 中，
// 所以会调用各自的 area() 函数。正如您所看到的，每个子类都有一个函数 area() 的独立实现。这就是多态的一般使用方式。
// 有了多态，您可以有多个不同的类，都带有同一个名称但具有不同实现的函数，函数的参数甚至可以是相同的。

// 虚函数 是在基类中使用关键字 virtual 声明的函数。在派生类中重新定义基类中定义的虚函数时，
// 会告诉编译器不要静态链接到该函数。
// 我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。

class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area() // 虚函数，可以给子类继承使用
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { } //直接继承Shape方法
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};


// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
   int recarea = shape->area();
   cout << "rec area: " << recarea << endl;

   
   // 存储三角形的地址
   shape = &tri;
   // 调用三角形的求面积函数 area
   int triarea = shape->area();
   cout << "tri area: " << triarea << endl;

   return 0;
}