//https://www.geeksforgeeks.org/templates-and-static-variables-in-c/


//Function templates and static variables:
// #include <iostream> 
  
// using namespace std; 
  
// template <typename T> 
// void fun(const T& x) 
// { 
//   static int i = 10; 
//   cout << ++i; 
//   return; 
// } 
  
// int main() 
// {     
//   fun<int>(1);  // prints 11 
//   cout << endl; 
//   fun<int>(2);  // prints 12 
//   cout << endl; 
//   fun<double>(1.1); // prints 11 
//   cout << endl; 
//   getchar(); 
//   return 0; 
// } 

/**
Each instantiation of function template has its own copy 
of local static variables.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
11
12
11

*/

#include <iostream> 
  
using namespace std; 
  
template <class T> class Test 
{   
private: 
  T val;  
public: 
  static int count; 
  Test() 
  { 
    count++; 
  } 
  // some other stuff in class 
}; 
  
template<class T> 
int Test<T>::count = 0; 
  
int main() 
{ 
  Test<int> a;  // value of count for Test<int> is 1 now 
  Test<int> b;  // value of count for Test<int> is 2 now 
  Test<double> c;  // value of count for Test<double> is 1 now 
  cout << Test<int>::count   << endl;  // prints 2   
  cout << Test<double>::count << endl; //prints 1 
     
  getchar(); 
  return 0; 
} 

/**
Each instantiation of class template has its own copy of member 
static variables.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
2
1


*/