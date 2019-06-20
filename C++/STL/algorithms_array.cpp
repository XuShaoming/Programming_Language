//https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/



// C++ code to demonstrate working of all_of() 
// all_of example

/*
#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array

int main () {
  std::array<int,8> foo = {3,5,7,11,13,17,19,23};

  if ( std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
    std::cout << "All the elements are odd numbers.\n";

  return 0;
}
*/

/**
The lambda is introduced by c++ 11, so you need to compile it like below.
g++ -std=c++11 algorithms_array.cpp


myous-MacBook-Pro:STL xushaoming$ ./a.out 
All the elements are odd numbers.
*/


// C++ code to demonstrate working of any_of() 
/*
#include<iostream> 
#include<algorithm> // for any_of() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, -6}; 
  
    // Checking if any element is negative 
    any_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 
  	cout << endl;
    return 0; 
  
} 
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
There exists a negative element
*/


// C++ code to demonstrate working of copy_n() 

/*
#include<iostream> 
#include<algorithm> // for copy_n() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, 6}; 
  
    // Declaring second array 
    int ar1[6]; 
  
    // Using copy_n() to copy contents 
    copy_n(ar, 6, ar1); 
  	

  	ar[5] = 7;
  	cout << "The old array : ";
  	for (int i=0; i<6 ; i++) 
       cout << ar[i] << " "; 
  	cout << endl;
    // Displaying the copied array 
    cout << "The new array after copying is : ";
    

    for (int i=0; i<6 ; i++) 
       cout << ar1[i] << " "; 
  	cout << endl;
    return 0; 
  
}
*/

/**
copy_n is deep copy of array.
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The old array : 1 2 3 4 5 7 
The new array after copying is : 1 2 3 4 5 6 
*/ 

// C++ code to demonstrate working of iota() 
#include<iostream> 
#include<numeric> // for iota() 
using namespace std; 
int main() 
{ 
    // Initializing array with 0 values 
    int ar[6] =  {0}; 
  
    // Using iota() to assign values 
    iota(ar, ar+6, 20); 
  
    // Displaying the new array 
    cout << "The new array after assigning values is : "; 
    for (int i=0; i<6 ; i++) 
       cout << ar[i] << " "; 
  	
  	cout << endl;
    return 0;  
} 
/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The new array after assigning values is : 20 21 22 23 24 25 
*/

/**
Summary

1. The lambda is introduced by c++ 11, so you need to compile it like below.
g++ -std=c++11 algorithms_array.cpp

2. copy_n is deep copy of array.
*/


