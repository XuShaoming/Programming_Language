//https://www.geeksforgeeks.org/unordered_multiset-and-its-uses/

// C++ program to demonstrate various function 
// of unordered_multiset 
/*
#include <iostream> 
#include <unordered_set>
using namespace std; 
  
// making typedef for short declaration 
typedef unordered_multiset<int>::iterator umit; 
  
// Utility function to print unordered_multiset 
void printUset(unordered_multiset<int> ums) 
{ 
    //  begin() returns iterator to first element of set 
    for (umit it = ums.begin(); it != ums.end(); it++) 
        cout << *it << " "; 
    cout << endl; 
} 
  
//  Driver program to check all function 
int main() 
{ 
    //  empty initialization 
    unordered_multiset<int> ums1; 
  
    //  Initialization bu intializer list 
    unordered_multiset<int> ums2 ({1, 3, 1, 7, 2, 3, 
                                   4, 1, 6}); 
  
    //  Initialization by assignment 
    ums1 = {2, 7, 2, 5, 0, 3, 7, 5}; 
  
    //  empty() function return true is set is empty 
    // otherwise false 
    if (ums1.empty()) 
        cout << "unordered multiset 1 is empty\n"; 
    else
        cout << "unordered multiset 1 is not empty\n"; 
  
    //  size() function returns total number of elements 
    // in data structure 
    cout << "The size of unordered multiset 2 is : "
         << ums2.size() << endl; 
  
    printUset(ums1); 
  
    ums1.insert(7); 
  
    printUset(ums1); 
  
    int val = 3; 
  
    // find function returns iterator to first position 
    // of  val, if exist otherwise it returns iterator 
    // to end 
    if (ums1.find(val) != ums1.end()) 
        cout << "unordered multiset 1 contains "
             << val << endl; 
    else
        cout << "unordered multiset 1 does not contains "
             << val << endl; 
  
    //  count function returns total number of occurence in set 
    val = 5; 
    int cnt = ums1.count(val); 
    cout << val << " appears " << cnt 
         << " times in unordered multiset 1 \n"; 
  
    val = 9; 
  
    //  if count return >0 value then element exist otherwise not 
    if (ums1.count(val)) 
        cout << "unordered multiset 1 contains "
             << val << endl; 
    else
        cout << "unordered multiset 1 does not contains "
             << val << endl; 
  
    val = 1; 
  
    // equal_range returns a pair, where first is iterator 
    // to first position of val and second it iterator to 
    // last position to val 
    pair<umit, umit> erange_it = ums2.equal_range(val); 
    if (erange_it.first != erange_it.second) 
        cout << val << " appeared atleast once in "
                        "unoredered_multiset \n"; 
  
  
    printUset(ums2); 
  
    // erase function deletes all instances of val 
    ums2.erase(val); 
  
    printUset(ums2); 
  
    // clear function deletes all entries from set 
    ums1.clear(); 
    ums2.clear(); 
  
    if (ums1.empty()) 
        cout << "unordered multiset 1 is empty\n"; 
    else
        cout << "unordered multiset 1 is not empty\n"; 
}
*/
/**
You can initialize unoroder_multiset uses {}. This is supported by C++11
unordered_multiset<int> ums1; 
ums1 = {2, 7, 2, 5, 0, 3, 7, 5}; 

xu-Macbook:STL xushaoming$ ./a.out 
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

//  C++ program to delete one copy from unordered set 
#include <iostream> 
#include <unordered_set>
using namespace std; 
  
//  making typedef for short declaration 
typedef unordered_multiset<int>::iterator umit; 
  
//  Utility function to print unordered_multiset 
void printUset(unordered_multiset<int> ums) 
{ 
    // begin() returns iterator to first element of 
    // set 
    umit it = ums.begin(); 
    for (; it != ums.end(); it++) 
        cout << *it << " "; 
    cout << endl; 
} 
  
//  function to delete one copy of val from set
// Here use the &, otherwise function will makes a copy and not affect original ums.
void erase_one_entry(unordered_multiset<int>& ums, 
                    int val) 
{ 
    //  find returns iterator to first position 
    umit it = ums.find(val); 
  
    //  if element is there then erasing that 
    if (it != ums.end()) 
       ums.erase(it); 
} 
  
//  Driver program to check above function 
int main() 
{ 
    //  initializing multiset by initializer list 
    unordered_multiset<int> ums ({1, 3, 1, 7, 2, 3, 
                                 4, 1, 6}); 
  
    int val = 1; 
    printUset(ums); 
    erase_one_entry(ums, val); 
    printUset(ums); 
}

/**
In C++ you need to pass the adress of container to function. Otherwise function will 
make a copy of and not affect the original container.

xu-Macbook:STL xushaoming$ ./a.out 
3 3 1 1 1 2 7 4 6 
3 3 1 1 2 7 4 6
*/



