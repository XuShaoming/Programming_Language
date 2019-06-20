//https://www.geeksforgeeks.org/templates-cpp/

#include <iostream> 
using namespace std; 
  
template <class T> 
class Array { 
private: 
    T *ptr; 
    int size; 
public: 
    Array(T arr[], int s); 
    void print(); 
}; 
  
template <class T> 
Array<T>::Array(T arr[], int s) { 
    ptr = new T[s]; 
    size = s; 
    for(int i = 0; i < size; i++) 
        ptr[i] = arr[i]; 
} 
  
template <typename T> 
void Array<T>::print() { 
    for (int i = 0; i < size; i++) 
        cout<<" "<<*(ptr + i); 
    cout<<endl; 
} 
  
int main() { 
    int arr[5] = {1, 2, 3, 4, 6}; 
    Array<int> a(arr, 5); 
    a.print(); 
    return 0; 
} 

/**
C++ adds two new keywords to support templates: ‘template’ and ‘typename’. 
The second keyword can always be replaced by keyword ‘class’.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
 1 2 3 4 6
*/