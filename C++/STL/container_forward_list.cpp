//https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

// C++ code to demonstrate forward list 
// and assign() 
/*
#include<iostream> 
#include<forward_list>  
using namespace std; 
  
int main() 
{ 
    // Declaring forward list 
    forward_list<int> flist1; 
  
    // Declaring another forward list 
    forward_list<int> flist2; 
  
    // Assigning values using assign() 
    flist1.assign({1, 2, 3}); 
  
    // Assigning repeating values using assign() 
    // 5 elements with value 10 
    flist2.assign(5, 10); 
  
    // Displaying forward lists 
    cout << "The elements of first forward list are : "; 
    for (int&a : flist1) 
        cout << a << " "; 
    cout << endl; 
      
    cout << "The elements of second forward list are : "; 
    for (int&b : flist2) 
        cout << b << " "; 
    cout << endl; 
  
    return 0; 
} 
*/
/**
flist1.assign({1, 2, 3});  This {1,2,3} also need to use c++11
-std=c++11 -stdlib=libc++ 


xu-Macbook:STL xushaoming$ ./a.out 
The elements of first forward list are : 1 2 3 
The elements of second forward list are : 10 10 10 10 10
*/

// C++ code to demonstrate working of  
// push_front(), emplace_front() and pop_front()
/*
#include<iostream> 
#include<forward_list>  
using namespace std; 
  
int main() 
{ 
    // Initializing forward list 
    forward_list<int> flist = {10, 20, 30, 40, 50}; 
  
    // Inserting value using push_front() 
    // Inserts 60 at front 
    flist.push_front(60); 
      
    // Displaying the forward list 
    cout << "The forward list after push_front operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Inserting value using emplace_front() 
    // Inserts 70 at front 
    flist.emplace_front(70); 
      
    // Displaying the forward list 
    cout << "The forward list after emplace_front operation : "; 
    for (int&c : flist)  
       cout << c << " "; 
    cout << endl; 
      
    // Deleting first value using pop_front() 
    // Pops 70 
    flist.pop_front(); 
      
    // Displaying the forward list 
    cout << "The forward list after pop_front operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
  
    return 0; 
} 
*/
/*
xu-Macbook:STL xushaoming$ ./a.out 
The forward list after push_front operation : 60 10 20 30 40 50 
The forward list after emplace_front operation : 70 60 10 20 30 40 50 
The forward list after pop_front operation : 60 10 20 30 40 50 
*/


// C++ code to demonstrate working of  
// insert_after(), emplace_after() and erase_after() 
/*
#include<iostream> 
#include<forward_list> 
using namespace std; 
  
int main() 
{ 
    // Initializing forward list 
    forward_list<int> flist = {10, 20, 30} ; 
      
    // Declaring a forward list iterator 
    forward_list<int>::iterator ptr; 
  
    // Inserting value using insert_after() 
    // starts insertion from second position 
    ptr =  flist.insert_after(flist.begin(), {1, 2, 3}); 
      
    // Displaying the forward list 
    cout << "The forward list after insert_after operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Inserting value using emplace_after() 
    // inserts 2 after ptr 
    ptr = flist.emplace_after(ptr,5); 
      
    // Displaying the forward list 
    cout << "The forward list after emplace_after operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Deleting value using erase.after Deleted 2 
    // after ptr 
    ptr = flist.erase_after(ptr); 
      
    // Displaying the forward list 
    cout << "The forward list after erase_after operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
  
    return 0; 
} 
*/

/**
xu-Macbook:STL xushaoming$ ./a.out 
The forward list after insert_after operation : 10 1 2 3 20 30 
The forward list after emplace_after operation : 10 1 2 3 5 20 30 
The forward list after erase_after operation : 10 1 2 3 5 30 
*/

// C++ code to demonstrate working of remove() and  
// remove_if() 
/*
#include<iostream> 
#include<forward_list>  
using namespace std; 
  
int main() 
{ 
    // Initializing forward list 
    forward_list<int> flist = {10, 20, 30, 25, 40, 40}; 
      
    // Removing element using remove() 
    // Removes all occurrences of 40 
    flist.remove(40); 
      
    // Displaying the forward list 
    cout << "The forward list after remove operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Removing according to condition. Removes  
    // elements greater than 20. Removes 25 and 30 
    flist.remove_if([](int x){ return x>20;}); 
      
    // Displaying the forward list 
    cout << "The forward list after remove_if operation : "; 
    for (int&c : flist)  
       cout << c << " "; 
    cout << endl; 
  
    return 0; 
  
} 
*/

/**
C++ lambda function:
flist.remove_if([](int x){ return x>20;}); 

xu-Macbook:STL xushaoming$ ./a.out 
The forward list after remove operation : 10 20 30 25 
The forward list after remove_if operation : 10 20 
*/


// C++ code to demonstrate working of  
// splice_after() 
#include<iostream> 
#include<forward_list> // for splice_after() 
using namespace std; 
  
int main() 
{ 
    // Initializing forward list 
    forward_list<int> flist1 = {10, 20, 30}; 
      
    // Initializing second list 
    forward_list<int> flist2 = {40, 50, 60}; 

    cout << "The flist1 : "; 
    for (int&c : flist1)  
       cout << c << " "; 
    cout << endl; 
      
    // Shifting elements from first to second 
    // forward list after 1st position 
    flist2.splice_after(flist2.begin(),flist1); 
      
    // Displaying the forward list 
    cout << "The forward list after splice_after operation : "; 
    for (int&c : flist2)  
       cout << c << " "; 
    cout << endl; 

    cout << "The flist1 : "; 
    for (int&c : flist1)  
       cout << c << " "; 
    cout << endl; 
  
    return 0; 
} 

/**
After splice_after the flist1 points to null. 
So it transfer values to the other forward_list.

xu-Macbook:STL xushaoming$ ./a.out 
The forward list after splice_after operation : 40 10 20 30 50 60 
*/
