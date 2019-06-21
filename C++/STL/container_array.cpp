//https://www.geeksforgeeks.org/array-class-c/

// C++ code to demonstrate working of array, 
// to() and get() 

/*
#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() 
{ 
    // Initializing the array elements 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
  
    // Printing array elements using at() 
    cout << "The array elemets are (using at()) : "; 
    for ( int i=0; i<6; i++) 
        cout << ar.at(i) << " "; 
    cout << endl; 
  
    // Printing array elements using get() 
    cout << "The array elemets are (using get()) : "; 
    cout << get<0>(ar) << " " << get<1>(ar) << " "; 
    cout << get<2>(ar) << " " << get<3>(ar) << " "; 
    cout << get<4>(ar) << " " << get<5>(ar) << " "; 
    cout << endl; 
  
    // Printing array elements using operator[] 
    cout << "The array elements are (using operator[]) : "; 
    for ( int i=0; i<6; i++) 
        cout << ar[i] << " "; 
    cout << endl; 
  
    return 0; 
} 
*/
/**
cout << get<0>(ar) << " " << get<1>(ar) << " ";
This is interesing. It is a little bit like template metaprogramming.

xu-Macbook:STL xushaoming$ ./a.out 
The array elemets are (using at()) : 1 2 3 4 5 6 
The array elemets are (using get()) : 1 2 3 4 5 6 
The array elements are (using operator[]) : 1 2 3 4 5 6 
*/


// C++ code to demonstrate working of 
// front() and back() 
/*
#include<iostream> 
#include<array> // for front() and back() 
using namespace std; 
int main() 
{ 
    // Initializing the array elements 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
  
    // Printing first element of array 
    cout << "First element of array is : "; 
    cout << ar.front() << endl; 
  
    // Printing last element of array 
    cout << "Last element of array is : "; 
    cout << ar.back() << endl; 
  
    return 0; 
  
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
First element of array is : 1
Last element of array is : 6
*/



// C++ code to demonstrate working of 
// size() and max_size() 
/*
#include<iostream> 
#include<array> // for size() and max_size() 
using namespace std; 
int main() 
{ 
    // Initializing the array elements 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
  
    // Printing number of array elements 
    cout << "The number of array elements is : "; 
    cout << ar.size() << endl; 
  
    // Printing maximum elements array can hold 
    cout << "Maximum elements array can hold is : "; 
    cout << ar.max_size() << endl; 
  
    return 0; 
  
} 
*/
/**
The number of array elements is : 6
Maximum elements array can hold is : 6
*/

// C++ code to demonstrate working of swap() 
/*
#include<iostream> 
#include<array> // for swap() and array 
using namespace std; 
int main() 
{ 
  
    // Initializing 1st array 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
  
    // Initializing 2nd array 
    array<int,6> ar1 = {7, 8, 9, 10, 11, 12}; 
  
    // Printing 1st and 2nd array before swapping 
    cout << "The first array elements before swapping are : "; 
    for (int i=0; i<6; i++) 
        cout << ar[i] << " "; 
    cout << endl; 
    cout << "The second array elements before swapping are : "; 
        for (int i=0; i<6; i++) 
    cout << ar1[i] << " "; 
    cout << endl; 
  
    // Swapping ar1 values with ar 
    ar.swap(ar1); 
  
    // Printing 1st and 2nd array after swapping 
    cout << "The first array elements after swapping are : "; 
    for (int i=0; i<6; i++) 
        cout << ar[i] << " "; 
    cout << endl; 
    cout << "The second array elements after swapping are : "; 
    for (int i=0; i<6; i++) 
        cout << ar1[i] << " "; 
    cout << endl; 
  
    return 0; 
  
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
The first array elements before swapping are : 1 2 3 4 5 6 
The second array elements before swapping are : 7 8 9 10 11 12 
The first array elements after swapping are : 7 8 9 10 11 12 
The second array elements after swapping are : 1 2 3 4 5 6 
*/


// C++ code to demonstrate working of empty() 
// and fill() 
#include<iostream> 
#include<array> // for fill() and empty() 
using namespace std; 
int main() 
{ 
  
    // Declaring 1st array 
    array<int,6> ar; 
  
    // Declaring 2nd array 
    array<int,0> ar1; 
  
    // Checking size of array if it is empty 
    ar1.empty()? cout << "Array empty": 
        cout << "Array not empty"; 
    cout << endl; 
  

    cout << "Array before filling operation is : "; 
    for ( int i=0; i<6; i++) 
        cout << ar[i] << " ";
    cout << endl;

    // Filling array with 0 
    ar.fill(0); 
  
    // Displaying array after filling 
    cout << "Array after filling operation is : "; 
    for ( int i=0; i<6; i++) 
        cout << ar[i] << " ";
    cout << endl;
  
    return 0; 
} 

/**
We can see below, C++ does not initialize the array with default value.

xu-Macbook:STL xushaoming$ ./a.out 
Array empty
Array before filling operation is : 0 0 0 0 -322135384 32766 
Array after filling operation is : 0 0 0 0 0 0 
xu-Macbook:STL xushaoming$ g++ container_array.cpp 
xu-Macbook:STL xushaoming$ ./a.out 
Array empty
Array before filling operation is : 0 0 0 0 -484574552 32766 
Array after filling operation is : 0 0 0 0 0 0 
*/