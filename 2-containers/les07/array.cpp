// array:: example
#include <iostream>
#include <array>
using namespace std;
/*
init
Element access: front,back,operator[],at,data
capacity: size,empty,max_size
iterators: begin,end,rbegin,rend,cbegin,cend,crbegin,crend
modifiers: swap,fill
*/
int main ()
{
  array<int,5> myarray = { 2, 16, 77, 34, 50 };

  for(unsigned i = 0; i< myarray.size();i++){
      cout << myarray[i] << " ";
  }
  cout << endl;
  
  for(unsigned i = 0; i< myarray.size();i++){
      cout << myarray.at(i) << " ";
  }
  cout << endl;
  
  int *p = myarray.data();
  for(unsigned i = 0; i< myarray.size();i++){
      cout << p << " ";
      cout << *p << " ";
      p++;
      cout << endl;
  }
  
  for ( auto it = myarray.begin(); it != myarray.end(); ++it )
    cout << *it << " "; 
  cout << '\n';
  
  for ( auto it = myarray.rbegin(); it != myarray.rend(); ++it )
    cout << *it << " ";
  cout << '\n';


  for ( auto it = myarray.cbegin(); it != myarray.cend(); ++it )
    cout << *it << " "; // cannot modify *it
  cout << '\n';
  
  for ( auto it = myarray.crbegin(); it != myarray.crend(); ++it )
    cout << *it << " ";
  cout << '\n';
  
  cout << "size of myarray: " << myarray.size() << endl;
  cout << "sizeof(myarray): " << sizeof(myarray) << endl;
  cout << "myarray.empty(): " << myarray.empty() << endl;
  cout << "myarray.max_size(): " << myarray.max_size() << endl;
  
  cout << "front is: " << myarray.front() << endl;   
  cout << "back is: " << myarray.back() << endl; 
  
  array<int,5> first = {10, 20, 30, 40, 50};
  array<int,5> second = {11, 22, 33, 44, 55};
  cout << "first.front is: " << first.front() << endl;   
  cout << "second.front is: " << second.front() << endl;   
  first.swap (second);
  cout << "first.front is: " << first.front() << endl;   
  cout << "second.front is: " << second.front() << endl;   
  
  return 0;
}