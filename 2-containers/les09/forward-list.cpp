// forward_list::before_begin
#include <iostream>
#include <forward_list>
using namespace std;
int main ()
{
  forward_list<int> mylist = {20, 30, 40, 50};
  mylist.insert_after ( mylist.before_begin(), 11 );
  // push_front, pop_front, insert_after, erase_after, assign, swap, clear
  // unique, sort, reverse, remove, remove_if, merge

  for ( auto it = mylist.begin(); it != mylist.end(); ++it )
    cout << ' ' << *it;
  cout << '\n';
  
  mylist.front() = 1000;
  for ( auto it = mylist.begin(); it != mylist.end(); ++it )
    cout << ' ' << *it;
  cout << '\n';
  
  unsigned myint = 10;
  if ( myint <= mylist.max_size() ) mylist.resize(myint);
  else cout << "That size exceeds the maximum.\n";
  for ( auto it = mylist.begin(); it != mylist.end(); ++it )
    cout << ' ' << *it;
  cout << '\n';
  
  forward_list< pair<int,char> > mylist2;
  mylist2.emplace_front(10,'a');
  mylist2.emplace_front(20,'b');
  mylist2.emplace_front(30,'c');
  cout << "mylist2 contains:";
  for (auto& x: mylist2)
    cout << " (" << x.first << "," << x.second << ")";
  cout << endl;
  
  forward_list<int> first;
  forward_list<int> second = {20, 40, 80};
  cout << "first " << (first.empty() ? "is empty" : "is not empty" ) << std::endl;
  cout << "second " << (second.empty() ? "is empty" : "is not empty" ) << std::endl;
  
  return 0;
}