#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// 在许多情况下，需要生成随机数。
// 关于随机数生成器，有两个相关的函数。一个是 rand()，该函数只返回一个伪随机数。
// 生成随机数之前必须先调用 srand() 函数。
int main ()
{
   int i,j;
   // 设置种子
   srand( (unsigned)time( NULL ) );
   // time_t time(time_t *__timer) throw()
   // Return the current time and put it in *TIMER if TIMER is not NULL.   
   // void srand(unsigned int __seed) throw()
   // Seed the random number generator with the given number.

   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();//Return a random integer between 0 and RAND_MAX inclusive.
      cout <<"随机数： " << j << endl;
   }
   return 0;
}