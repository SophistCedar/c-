// constructing stacks
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
using namespace std;
// LIFO stack
// Stacks are a type of container adaptor, specifically designed to operate in a LIFO context 
// (last-in first-out), where elements are inserted and extracted only from one end of the container.

int main ()
{
  deque<int> mydeque (3,100);          // deque with 3 elements
  vector<int> myvector (2,200);        // vector with 2 elements
  stack<int> first;                    // empty stack
  stack<int> second (mydeque);         // stack initialized to copy of deque
  stack<int,vector<int> > third;  // empty stack using vector
  stack<int,vector<int> > fourth (myvector);
  cout << "size of first: " << first.size() << '\n';
  cout << "size of second: " << second.size() << '\n';
  cout << "size of third: " << third.size() << '\n';
  cout << "size of fourth: " << fourth.size() << '\n';
  
  stack<int> myints;
  cout << "0. size: " << myints.size() << '\n';
  for (int i=0; i<5; i++) myints.push(i); 
  cout << "1. size: " << myints.size() << '\n';
  myints.pop(); // Removes the element on top of the stack, effectively reducing its size by one.
  cout << "2. size: " << myints.size() << '\n';
  
  stack<int> mystack;
  mystack.push(10);
  mystack.push(20); // Inserts a new element at the top of the stack, above its current top element.
  mystack.top() -= 5; //Returns a reference to the top element in the stack. 
  std::cout << "mystack.top() is now " << mystack.top() << '\n';


  return 0;
}