//https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/

// C++ program to demonstrate working of auto 
// and type inference 

/*
#include <iostream>
#include <typeinfo>
using namespace std; 
  
int main() 
{ 
    auto x = 4; 
    auto y = 3.37; 
    auto ptr = &x; 
    cout << typeid(x).name() << endl 
         << typeid(y).name() << endl 
         << typeid(ptr).name() << endl; 
  
    return 0; 
} 
*/

/**
myous-MacBook-Pro:C++ xushaoming$ ./a.out 
i
d
Pi
*/


// C++ program to demonstrate use of decltype 

#include <iostream>
using namespace std; 
  
int fun1() { return 10; } 
char fun2() { return 'g'; } 
  
int main() 
{ 
    // Data type of x is same as return type of fun1() 
    // and type of y is same as return type of fun2() 
    decltype(fun1()) x; 
    decltype(fun2()) y; 
  
    cout << typeid(x).name() << endl; 
    cout << typeid(y).name() << endl; 
  
    return 0; 
} 

/**
myous-MacBook-Pro:C++ xushaoming$ ./a.out 
i
c
*/


