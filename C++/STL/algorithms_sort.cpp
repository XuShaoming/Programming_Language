//https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/


#include <iostream> 
#include <algorithm> 
  
using namespace std; 
  
void show(int a[]) 
{ 
    for(int i = 0; i < 10; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout << "\n The array before sorting is : "; 
    show(a); 
  
    sort(a, a+9); 
  
    cout << "\n\n The array after sorting is : "; 
    show(a);
    cout <<endl;

  
    return 0; 
  
} 

/*
sort(a, a+9) makes it only sort arrain in range from [0,8]
myous-MacBook-Pro:STL xushaoming$ ./a.out 

 The array before sorting is : 1 5 8 9 6 7 3 4 2 0 

 The array after sorting is : 1 2 3 4 5 6 7 8 9 0
*/