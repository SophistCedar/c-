// deque::begin
#include <iostream>
#include <deque>
using namespace std;
int main ()
{
  deque<int> mydeque;
  for (int i=1; i<=5; i++) mydeque.push_back(i);

  cout << "mydeque contains:";
  deque<int>::iterator it;
  it = mydeque.begin();
  while (it != mydeque.end())
    cout << ' ' << *it++;
  cout << '\n';
  
  cout << "mydeque. size: " << mydeque.size() << '\n';
  cout << "mydeque. empty: " << mydeque.empty() << '\n';
  cout << "mydeque. max_size: " << mydeque.max_size() << '\n';
  cout << "mydeque. front: " << mydeque.front() << '\n';
  cout << "mydeque. back: " << mydeque.back() << '\n';
  cout << "mydeque[2]: " << mydeque[2] << '\n';
  cout << "mydeque.at(2): " << mydeque.at(2) << '\n';
  
  mydeque.resize(12);
  it = mydeque.begin();
  while (it != mydeque.end())
    cout << ' ' << *it++;
  cout << '\n';
    
  // push_back push_front pop_back pop_front insert erase swap clear
  deque<int> first;
  deque<int> second;
  deque<int> third;
  first.assign (7,100);             // 7 ints with a value of 100
  it=first.begin()+1;
  second.assign (it,first.end()-1); // the 5 central values of first
  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.
  cout << "Size of first: " << int (first.size()) << '\n';
  cout << "Size of second: " << int (second.size()) << '\n';
  cout << "Size of third: " << int (third.size()) << '\n';
  
  return 0;
}