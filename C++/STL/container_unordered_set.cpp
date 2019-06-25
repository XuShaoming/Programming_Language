//https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/

// C++ program to demonstrate various function of unordered_set 
/*
#include <iostream>
#include <unordered_set>
using namespace std; 
  
int main() 
{ 
    // declaring set for storing string data-type 
    unordered_set<string> stringSet; 
  
    // inserting various string, same string will be stored 
    // once in set 
    stringSet.insert("code"); 
    stringSet.insert("in"); 
    stringSet.insert("c++"); 
    stringSet.insert("is"); 
    stringSet.insert("fast"); 
  
    string key = "slow"; 
  
    //     find returns end iterator if key is not found, 
    //  else it returns iterator to that key 
    if (stringSet.find(key) == stringSet.end()) 
        cout << key << " not found\n\n"; 
    else
        cout << "Found " << key << endl << endl; 
  
    key = "c++"; 
    if (stringSet.find(key) == stringSet.end()) 
        cout << key << " not found\n"; 
    else
        cout << "Found " << key << endl; 
  
    // now iterating over whole set and printing its 
    // content 
    cout << "\nAll elements : "; 
    unordered_set<string> :: iterator itr; 
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++) 
        cout << (*itr) << endl; 
}
*/

/**
xu-Macbook:STL xushaoming$ ./a.out 
slow not found

Found c++

All elements : fast
is
c++
in
code

*/


// C++ program to find duplicate from an array using 
// unordered_set
#include <iostream>
#include <unordered_set>
using namespace std; 
  
// Print duplicates in arr[0..n-1] using unordered_set 
void printDuplicates(int arr[], int n) 
{ 
    // declaring unordered sets for checking and storing 
    // duplicates 
    unordered_set<int> intSet; 
    unordered_set<int> duplicate; 
  
    // looping through array elements 
    for (int i = 0; i < n; i++) 
    { 
        // if element is not there then insert that 
        if (intSet.find(arr[i]) == intSet.end()) 
            intSet.insert(arr[i]); 
  
        // if element is already there then insert into 
        // duplicate set 
        else
            duplicate.insert(arr[i]); 
    } 
  
    // printing the result 
    cout << "Duplicate item are : "; 
    unordered_set<int> :: iterator itr; 
  
    // iterator itr loops from begin() till end() 
    for (itr = duplicate.begin(); itr != duplicate.end(); itr++) 
        cout << *itr << " "; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5}; 
    int n = sizeof(arr) / sizeof(int); 
  
    printDuplicates(arr, n); 
    return 0; 
} 

/**
unordered multiset 1 is not empty
The size of unordered multiset 2 is : 9
2 2 7 7 0 5 5 3 
2 2 7 7 7 0 5 5 3 
unordered multiset 1 contains 3
5 appears 2 times in unordered multiset 1 
unordered multiset 1 does not contains 9
1 appeared atleast once in unoredered_multiset 
3 3 1 1 1 2 7 4 6 
3 3 2 7 4 6 
unordered multiset 1 is empty
*/