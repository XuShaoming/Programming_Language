//https://www.geeksforgeeks.org/template-specialization-c/


// // A generic sort function  
// template <class T> 
// void sort(T arr[], int size) 
// { 
//     // code to implement Quick Sort 
// } 
  
// // Template Specialization: A function  
// // specialized for char data type 
// template <> 
// void sort<char>(char arr[], int size) 
// { 
//     // code to implement counting sort 
// } 


// #include <iostream> 
// using namespace std; 
  
// template <class T> 
// void fun(T a) 
// { 
//    cout << "The main template fun(): " 
//         << a << endl; 
// } 
  
// template<> 
// void fun(int a) 
// { 
//     cout << "Specialized Template for int type: "
//          << a << endl; 
// } 
  
// int main() 
// { 
//     fun<char>('a'); 
//     fun<int>(10); 
//     fun<float>(10.14); 
// } 

/**

myous-MacBook-Pro:STL xushaoming$ ./a.out 
The main template fun(): a
Specialized Template for int type: 10
The main template fun(): 10.14
*/

#include <iostream> 
using namespace std; 
  
template <class T> 
class Test 
{ 
  // Data memnbers of test 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "General template object \n"; 
   } 
   // Other methods of Test 
}; 
  
template <> 
class Test <int> 
{ 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "Specialized template object\n"; 
   } 
}; 
  
int main() 
{ 
    Test<int> a; 
    Test<char> b; 
    Test<float> c; 
    return 0; 
} 


/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
Specialized template object
General template object 
General template object 
*/


