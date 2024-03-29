// CPP program to implement 
// Binary Search in  
// Standard Template Library (STL) 
#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
void show(int a[], int arraysize) 
{ 
    for (int i = 0; i < arraysize; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "\n The array is : "; 
    show(a, asize); 
  
    cout << "\n\nLet's say we want to search for 2 in the array"; 
    cout << "\n So, we first sort the array"; 
    sort(a, a + asize); 
    cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    cout << "\n\nNow, we do the binary search"; 
    if (binary_search(a, a + 10, 2)) 
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
  
    cout << "\n\nNow, say we want to search for 10"; 
    if (binary_search(a, a + 10, 10)) 
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
    
    cout <<endl;
    return 0; 
} 

/**

myous-MacBook-Pro:STL xushaoming$ ./a.out 

 The array is : 1 5 8 9 6 7 3 4 2 0 

Let's say we want to search for 2 in the array
 So, we first sort the array

 The array after sorting is : 0 1 2 3 4 5 6 7 8 9 

Now, we do the binary search
Element found in the array

Now, say we want to search for 10
*/