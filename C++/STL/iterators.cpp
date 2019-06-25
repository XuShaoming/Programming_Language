//https://www.geeksforgeeks.org/iterators-c-stl/

// C++ code to demonstrate the working of 
// iterator, begin() and end() 
/*
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr; 
      
    // Displaying vector elements using begin() and end() 
    cout << "The vector elements are : "; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " "; 
    cout << endl; 
    return 0;     
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
The vector elements are : 1 2 3 4 5 
*/

// C++ code to demonstrate the working of 
// advance() 
/*
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr = ar.begin(); 
      
    // Using advance() to increment iterator position 
    // points to 4 
    advance(ptr, 3); 
      
    // Displaying iterator position 
    cout << "The position of iterator after advancing is : "; 
    cout << *ptr << " "<<endl; 
      
    return 0;  
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
The position of iterator after advancing is : 4 
*/


// C++ code to demonstrate the working of 
// next() and prev()
/*
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
      
    // Declaring iterators to a vector 
    vector<int>::iterator ptr = ar.begin(); 
    vector<int>::iterator ftr = ar.end(); 
     
     
    // Using next() to return new iterator 
    // points to 4 
    auto it = next(ptr, 3); 
      
    // Using prev() to return new iterator 
    // points to 3 
    auto it1 = prev(ftr, 3); 
      
    // Displaying iterator position 
    cout << "The position of new iterator using next() is : "; 
    cout << *it << " "; 
    cout << endl; 
      
    // Displaying iterator position 
    cout << "The position of new iterator using prev()  is : "; 
    cout << *it1 << " "; 
    cout << endl; 
      
    return 0;  
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
The position of new iterator using next() is : 4 
The position of new iterator using prev()  is : 3 
*/

// C++ code to demonstrate the working of 
// inserter() 
/*
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
    vector<int> ar1 = {10, 20, 30};  
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr = ar.begin(); 
     
    // Using advance to set position 
    advance(ptr, 3); 
      
    // copying 1 vector elements in other using inserter() 
    // inserts ar1 after 3rd position in ar 
    copy(ar1.begin(), ar1.end(), inserter(ar,ptr)); 
      
    // Displaying new vector elements 
    cout << "The new vector after inserting elements is : "; 
    for (int &x : ar)  
        cout << x << " "; 
    cout << endl; 
    return 0;     
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
The new vector after inserting elements is : 1 2 3 10 20 30 4 5 
*/

//Input Iterators in C++
//https://www.geeksforgeeks.org/input-iterators-in-cpp/

// C++ program to demonstrate input iterator 
/*
#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    vector<int> v1 = { 1, 2, 3, 4, 5 }; 
  
    // Declaring an iterator 
    vector<int>::iterator i1; 
  
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        // Accessing elements using iterator 
        cout << (*i1) << " "; 
    } 
    

    // for (i1 = --v1.end(); i1 != v1.begin(); --i1) { 
    //     // Accessing elements using iterator 
    //     cout << (*i1) << " "; 
    // } 

    cout << endl;
    return 0; 
} 
*/
/**
Input Iterators: Only accessing, no assigning

xu-Macbook:STL xushaoming$ ./a.out 
1 2 3 4 5 

Second loop works means vector not returns input iterator.
*/

//OUTPUT ITERATOR
//https://www.geeksforgeeks.org/output-iterators-cpp/
/**
1. can be assigned values in a sequence, but cannot be used to access values.
*/
// C++ program to demonstrate output iterator 
/*
#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
    vector<int>v1 = {1, 2, 3, 4, 5}; 
  
    // Declaring an iterator 
    vector<int>::iterator i1; 
  
    for (i1=v1.begin();i1!=v1.end();++i1) 
    { 
        // Assigning elements using iterator 
        *i1 = 1; 
    } 
    // v1 becomes 1 1 1 1 1
    for (i1=v1.begin();i1!=v1.end();++i1) 
    { 
        // Assigning elements using iterator 
        cout << *i1 << " ";
    } 
    cout << endl;
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
1 1 1 1 1 
*/

//Forward Iterators
//https://www.geeksforgeeks.org/forward-iterators-in-cpp/
// C++ program to demonstrate forward iterator 
/*
#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    vector<int> v1 = { 1, 2, 3, 4, 5 }; 
  
    // Declaring an iterator 
    vector<int>::iterator i1; 
  
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        // Assigning values to locations pointed by iterator 
        *i1 = 1; 
    } 
  
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        // Accessing values at locations pointed by iterator 
        cout << (*i1) << " "; 
    } 
  	cout << endl;
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
1 1 1 1 1 
*/

//Bidirectional Iterators
//https://www.geeksforgeeks.org/bidirectional-iterators-in-cpp/

/**
1. list, map, multimap, set and multiset support bidirectional iterators. 
*/

// C++ program to demonstrate bidirectional iterator 
/*
#include<iostream> 
#include<list> 
using namespace std; 
int main() 
{ 
    list<int>v1 = {1, 2, 3, 4, 5}; 
  
    // Declaring an iterator 
    list<int>::iterator i1; 
  
    // Accessing the elements from end using decrement 
    // operator 
    for (i1=v1.end();i1!=v1.begin();--i1) 
    { 
        if (i1 != v1.end()) 
        { 
            cout << (*i1) << " "; 
        } 
    } 
    cout << (*i1) << endl;  
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
5 4 3 2 1
*/

//Random-access Iterators in C++
/*
1. vector, deque support random-access iterators. 
*/
/*
#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
    vector<int>v1 = {1, 2, 3, 4, 5}; 
  
    // Declaring first iterator 
    vector<int>::iterator i1; 
  
    // Declaring second iterator 
    vector<int>::iterator i2; 
  
    // i1 points to the beginning of the list 
    i1 = v1.begin(); 
  
    // i2 points to the end of the list 
    i2 = v1.end(); 
  
    // Applying relational operator to them 
    if ( i1 < i2) 
    { 
        cout << "Yes"; 
    }  
  
    // Applying arithmetic operator to them 
    int count = i2 - i1; 
  
    cout << "\ncount = " << count << endl; 
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
Yes
count = 5
*/

// C++ program to demonstrate Random-access iterator 

#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
    vector<int>v1 = {1, 2, 3, 4, 5}; 
    int i; 
  
    // Accessing elements using offset dereference 
    // operator [ ] 
    for(i=0;i<5;++i) 
    { 
        cout << v1[i] << " "; 
    } 
    cout << endl;
    return 0;   
} 
/**
xu-Macbook:STL xushaoming$ ./a.out 
1 2 3 4 5 
*/
/*

//https://www.geeksforgeeks.org/reservoir-sampling/
//Reservoir Sampling algorithms
// Definition of std::random_shuffle() 
template 
void random_shuffle(RandomAccessIterator first, 
                    RandomAccessIterator last, 
                    RandomNumberGenerator& gen) 
{ 
    iterator_traits::difference_type i, n; 
    n = (last - first); 
    for (i=n-1; i>0; --i)  
    { 
        swap (first[i],first[gen(i+1)]); 
    } 
} 
*/









