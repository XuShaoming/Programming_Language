//https://www.geeksforgeeks.org/c-magicians-stl-algorithms/

// A C++ program to demonstrate working of sort(), 
// reverse() 

/*
#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <numeric> //For accumulate operation 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {10, 20, 5, 23 ,42 , 15}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Vector is: "; 
    for (int i=0; i<n; i++) 
        cout << vect[i] << " "; 
  
    // Sorting the Vector in Ascending order 
    sort(vect.begin(), vect.end()); 
  
    cout << "\nVector after sorting is: "; 
    for (int i=0; i<n; i++) 
       cout << vect[i] << " "; 
  
    // Reversing the Vector 
    reverse(vect.begin(), vect.end()); 
  
    cout << "\nVector after reversing is: "; 
    for (int i=0; i<6; i++) 
        cout << vect[i] << " "; 
  
    cout << "\nMaximum element of vector is: "; 
    cout << *max_element(vect.begin(), vect.end()); 
  
    cout << "\nMinimum element of vector is: "; 
    cout << *min_element(vect.begin(), vect.end()); 
  
    // Starting the summation from 0 
    cout << "\nThe summation of vector elements is: "; 
    cout << accumulate(vect.begin(), vect.end(), 0); 
  	cout<<endl;
    return 0; 
} 
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
Vector is: 10 20 5 23 42 15 
Vector after sorting is: 5 10 15 20 23 42 
Vector after reversing is: 42 23 20 15 10 5 
Maximum element of vector is: 42
Minimum element of vector is: 5
The summation of vector elements is: 115
*/


// C++ program to demonstrate working of count() 
// and find() 

/*
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {10, 20, 5, 23 ,42, 20, 15}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Occurrences of 20 in vector : "; 
  
    // Counts the occurrences of 20 from 1st to 
    // last element 
    cout << count(vect.begin(), vect.end(), 20); 
  
    // find() returns iterator to last address if 
    // element not present 
    find(vect.begin(), vect.end(),5) != vect.end()? 
                         cout << "\nElement found": 
                     cout << "\nElement not found"; 
  	cout<<endl;
    return 0; 
}
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
Occurrences of 20 in vector : 2
Element found
*/



// C++ program to demonstrate working of lower_bound() 
// and upper_bound(). 

/*
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    // Sort the array to make sure that lower_bound() 
    // and upper_bound() work. 
    sort(vect.begin(), vect.end()); 
  
    // Returns the first occurrence of 20 
    // about auto: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
    auto q = lower_bound(vect.begin(), vect.end(), 20); 
  
    // Returns the last occurrence of 20 
    auto p = upper_bound(vect.begin(), vect.end(), 20); 
  
    cout << "The lower bound is at position: "; 
    cout << q-vect.begin() << endl; 
  
    cout << "The upper bound is at position: "; 
    cout << p-vect.begin() << endl; 
  
    return 0; 
} 
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The lower bound is at position: 3
The upper bound is at position: 5
*/

/*
// C++ program to demonstrate working of erase() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Vector is :"; 
    for (int i=0; i<6; i++) 
        cout << vect[i]<<" "; 
  
    // Delete second element of vector 
    vect.erase(vect.begin()+1); 
  
    cout << "\nVector after erasing the element: "; 
    for (int i=0; i<5; i++) 
        cout << vect[i] << " "; 
  
    // sorting to enable use of unique() 
    sort(vect.begin(), vect.end()); 
  
    cout << "\nVector before removing duplicate "
             " occurrences: "; 
    for (int i=0; i<5; i++) 
        cout << vect[i] << " "; 
  
    // Deletes the duplicate occurrences 
    vect.erase(unique(vect.begin(),vect.end()),vect.end()); 
  
    cout << "\nVector after deleting duplicates: "; 
    for (int i=0; i< vect.size(); i++) 
        cout << vect[i] << " "; 
  	cout << endl;
    return 0; 
}
*/
/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
Vector is :5 10 15 20 20 23 
Vector after erasing the element: 5 15 20 20 23 
Vector before removing duplicate  occurrences: 5 15 20 20 23 
Vector after deleting duplicates: 5 15 20 23 42 45 
*/

// C++ program to demonstrate working of next_permutation() 
// and prev_permutation() 
// next_permutation example


/*
// from http://www.cplusplus.com/reference/algorithm/next_permutation/
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

int main () {
  int myints[] = {1,2,3};

  std::sort (myints,myints+3);

  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::next_permutation(myints,myints+3) );

  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}
*/
/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The 3! possible permutations with 3 elements:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop: 1 2 3
*/


// C++ program to demonstrate working of distance() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    // Return distance of first to maximum element 
    cout << "Distance between first to max element: ";  
    cout << distance(vect.begin(), 
                     max_element(vect.begin(), vect.end())); 
    cout << endl;
    return 0; 
}

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
Distance between first to max element: 7
*/







