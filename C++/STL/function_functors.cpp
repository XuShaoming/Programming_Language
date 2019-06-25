//https://www.geeksforgeeks.org/functors-in-cpp/

// A C++ program uses transform() in STL to add  
// 1 to all elements of arr[] 
/*
#include <iostream>
#include <algorithm>
using namespace std; 
   
int increment(int x) {  return (x+1); } 
   
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
   
    // Apply increment to all elements of 
    // arr[] and store the modified elements 
    // back in arr[] 
    transform(arr, arr+n, arr, increment); 
   
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
   	cout<<endl;
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
2 3 4 5 6 
*/

// C++ program to demonstrate working of 
// functors. 
#include <iostream>
#include <algorithm>
using namespace std; 
  
// A Functor 
class increment 
{ 
private: 
    int num; 
public: 
    increment(int n) : num(n) {  } 
  
    // This operator overloading enables calling 
    // operator function () on objects of increment 
    int operator () (int arr_num) const { 
        return num + arr_num; 
    } 
}; 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int to_add = 5; 
  
    transform(arr, arr+n, arr, increment(to_add)); 
  
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 

