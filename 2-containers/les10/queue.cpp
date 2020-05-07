// constructing queues
#include <iostream>       // std::cout
#include <deque>          // std::deque
#include <list>           // std::list
#include <queue>          // std::queue
using namespace std;
// FIFO
// constructor, size, push, pop, 
// front, back, emplace, swap
// The element removed is the "oldest" element in the queue whose value can be retrieved by 
// calling member queue::front.
// c++11 新加的emplace_back, more effective than push_back
// 在引入右值引用，转移构造函数，转移复制运算符之前，通常使用push_back()向容器中加入一个右值元素(临时对象)时，
// 首先会调用构造函数构造这个临时对象，然后需要调用拷贝构造函数将这个临时对象放入容器中。原来的临时变量释放。
// 这样造成的问题就是临时变量申请资源的浪费。 
// use emblace instead of push
int main ()
{
  deque<int> mydeck (3,100);        // deque with 3 elements
  list<int> mylist (2,200);         // list with 2 elements
  queue<int> first;                 // empty queue
  queue<int> second (mydeck);       // queue initialized to copy of deque
  queue<int,list<int> > third; // empty queue with list as underlying container
  queue<int,list<int> > fourth (mylist);
  cout << "size of first: " << first.size() << '\n';
  cout << "size of second: " << second.size() << '\n';
  cout << "size of third: " << third.size() << '\n';
  cout << "size of fourth: " << fourth.size() << '\n';
	
  queue<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);//push() 在末尾加入一个元素
  bar.push (111); bar.push(222);
  foo.swap(bar);
  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';
	
  queue<string> myqueue;
  myqueue.emplace ("First sentence ");
  myqueue.emplace ("Second sentence ");
  cout << "myqueue contains:\n";
  while (!myqueue.empty())
  {
    cout << myqueue.front() << myqueue.back() << '\n';
    myqueue.pop();// pop() 删除第一个元素
  }

  return 0;
}