// C++ program to demonstrate various function of 
// unordered_multimap
/*
#include <iostream> 
#include <unordered_map>
using namespace std; 
  
//making typedef for short declaration 
typedef unordered_multimap<string, int>::iterator umit; 
  
// Utility function to print unordered_multimap 
void printUmm(unordered_multimap<string, int> umm) 
{ 
    // begin() returns iterator to first element of map 
    
    for (umit it = umm.begin() ; it != umm.end(); it++) 
        cout << "<" << it->first << ", " << it->second 
             << ">  "; 
  
    cout << endl; 
} 
  
// Driver program to check all function 
int main() 
{ 
    // empty initialization 
    unordered_multimap<string, int> umm1; 
  
    // Initialization bu intializer list 
    unordered_multimap<string, int> umm2 ({{"apple", 1}, 
                                           {"ball", 2}, 
                                           {"apple", 10}, 
                                           {"cat", 7}, 
                                           {"dog", 9}, 
                                           {"cat", 6}, 
                                           {"apple", 1}}); 
  
    // Initialization by assignment operation 
    umm1 = umm2; 
    umm2.insert({"apple", 2});
    printUmm(umm1); 
  
    // empty returns true, if container is empty else it returns 
    // false 
    if (umm2.empty()) 
        cout << "unordered multimap 2 is empty\n"; 
    else
        cout << "unordered multimap 2 is not empty\n"; 
  
    // size returns total number of elements in container 
    cout << "Size of unordered multimap 1 is " << umm1.size() 
         << endl; 
  
    string key = "apple"; 
  
    // find and return any pair, associated with key 
    umit it = umm1.find(key); 
    if (it != umm1.end()) 
    { 
        cout << "\nkey " << key << " is there in unordered "
             << " multimap 1\n"; 
        cout << "\none of the value associated with " << key 
             << " is " << it->second << endl; 
    } 
    else
        cout << "\nkey " << key << " is not there in unordered"
             << " multimap 1\n"; 
  
    // count returns count of total number of pair associated 
    // with key 
    int cnt = umm1.count(key); 
    cout << "\ntotal values associated with " << key << " are "
         << cnt << "\n\n"; 
  
    printUmm(umm2); 
  
    // one insertion by makeing pair explicitly 
    umm2.insert(make_pair("dog", 11)); 
  
    // insertion by initializer list 
    umm2.insert({{"alpha", 12}, {"beta", 33}}); 
    cout << "\nAfter insertion of <apple, 12> and <beta, 33>\n"; 
    printUmm(umm2); 
  
    // erase deletes all pairs corresponding to key 
    umm2.erase("apple"); 
    cout << "\nAfter deletion of apple\n"; 
    printUmm(umm2); 
  
    // clear deletes all pairs from container 
    umm1.clear(); 
    umm2.clear(); 
  
    if (umm2.empty()) 
        cout << "\nunordered multimap 2 is empty\n"; 
    else
        cout << "\nunordered multimap 2 is not empty\n"; 
} 
*/
/**
This assignment make a new copy to umm1.
// Initialization by assignment operation 
    umm1 = umm2;
// insertion by initializer list 
umm2.insert({{"alpha", 12}, {"beta", 33}}); 


xu-Macbook:STL xushaoming$ ./a.out 
<cat, 7>  <cat, 6>  <apple, 1>  <apple, 10>  <apple, 1>  <ball, 2>  <dog, 9>  
unordered multimap 2 is not empty
Size of unordered multimap 1 is 7

key apple is there in unordered  multimap 1

one of the value associated with apple is 1

total values associated with apple are 3

<dog, 9>  <ball, 2>  <apple, 1>  <apple, 10>  <apple, 1>  <cat, 7>  <cat, 6>  

After insertion of <apple, 12> and <beta, 33>
<dog, 9>  <dog, 11>  <ball, 2>  <beta, 33>  <apple, 1>  <apple, 10>  <apple, 1>  <cat, 7>  <cat, 6>  <alpha, 12>  

After deletion of apple
<dog, 9>  <dog, 11>  <ball, 2>  <beta, 33>  <cat, 7>  <cat, 6>  <alpha, 12>  

unordered multimap 2 is empty
*/



// C++ program to implement find and erase for specific 
// key-value pair for unordered_multimap 
#include <iostream> 
#include <unordered_map>
using namespace std; 
  
// making typedef for short declaration 
typedef unordered_multimap<string, int>:: iterator umit; 
  
// function to check whether p is there in map or not 
bool find_kv(unordered_multimap<string, int>& umm, 
             pair<string, int> p) 
{ 
    // equal_range returns pair of iterator of first and last 
    // position associated with key 
    pair<umit, umit> it = umm.equal_range(p.first); 
    umit it1 = it.first; 
  
    pair<string, int> tmp; 
  
    // looping over all values associated with key 
    while (it1 != it.second) 
    { 
        tmp = *it1; 
        if (tmp == p) 
            return true; 
        it1++; 
    } 
    return false; 
} 
  
// function to delete one copy of pair p from map umm 
void erase_kv(unordered_multimap<string, int>& umm, 
              pair<string, int> p) 
{ 
    // equal_range returns pair of iterator of first and 
    // last position associated with key 
    pair<umit, umit> it = umm.equal_range(p.first); 
    umit it1 = it.first; 
    pair<string, int> tmp; 
  
    // looping over all values associated with key 
    while (it1 != it.second) 
    { 
        tmp = *it1; 
        if (tmp == p) 
        { 
            // iterator version of erase : deletes pair 
            // at that position only 
            umm.erase(it1); 
            break; 
        } 
        it1++; 
    } 
} 
  
// Utility function to print unordered_multimap 
void printUmm(unordered_multimap<string, int> umm) 
{ 
    // begin() returns iterator to first element of map 
    umit it = umm.begin(); 
    for (; it != umm.end(); it++) 
        cout << "<" << it->first << ", " << it->second << "> "; 
    cout << endl; 
} 
  
// Driver program to check above function 
int main() 
{ 
    // initializing multimap by initializer list 
    unordered_multimap<string, int> umm ({{"apple", 1}, 
        {"ball", 2}, 
        {"apple", 10}, 
        {"cat", 7}, 
        {"dog", 9}, 
        {"cat", 6}, 
        {"apple", 1} 
    }); 
  
    cout << "Initial content\n"; 
    printUmm(umm); 
    pair<string, int> kv = make_pair("apple", 1); 
  
    cout << "\nAfter insertion of one more <apple, 1>\n"; 
    printUmm(umm); 
  
    if (find_kv(umm, kv)) 
        erase_kv(umm, kv); 
    else
        cout << "key-value pair is not there in unordered multimap\n"; 
  
    cout << "\nAfter deletion one occurrence of <apple, 1>\n"; 
    printUmm(umm); 
}


/**
xu-Macbook:STL xushaoming$ ./a.out 
Initial content
<dog, 9> <ball, 2> <apple, 1> <apple, 10> <apple, 1> <cat, 7> <cat, 6> 

After insertion of one more <apple, 1>
<dog, 9> <ball, 2> <apple, 1> <apple, 10> <apple, 1> <cat, 7> <cat, 6> 

After deletion one occurrence of <apple, 1>
<dog, 9> <ball, 2> <apple, 10> <apple, 1> <cat, 7> <cat, 6> 
*/