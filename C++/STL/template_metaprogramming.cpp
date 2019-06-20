//https://www.geeksforgeeks.org/template-metaprogramming-in-c/

#include <iostream> 
using namespace std; 
  
template<int n> struct funStruct 
{ 
    enum { val = 2*funStruct<n-1>::val }; 
}; 
  
template<> struct funStruct<0> 
{ 
    enum { val = 1 }; 
}; 
  
int main() 
{ 
    cout << funStruct<8>::val << endl; 
    return 0; 
} 


/**
 Template Metaprogramming is generally not used in practical programs, 
 it is an interesting conecpt though.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
256
*/