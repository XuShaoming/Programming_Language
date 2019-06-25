//https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/
/*
// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, int> umap; 
  
    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 
    

    // Traversing an unordered map 
    for (auto x : umap) {
      cout << x.first << " " << x.second << endl; 
    }
  
}
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
Contribute 30
Practice 20
GeeksforGeeks 10
*/

// C++ program to demonstrate functionality of unordered_map
/*
#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() 
{ 
    // Declaring umap to be of <string, double> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, double> umap; 
  
    // inserting values by using [] operator 
    umap["PI"] = 3.14; 
    umap["root2"] = 1.414; 
    umap["root3"] = 1.732; 
    umap["log10"] = 2.302; 
    umap["loge"] = 1.0; 
  
    // inserting value by insert function 
    umap.insert(make_pair("e", 2.718)); 
  
    string key = "PI"; 
  
    // If key not found in map iterator to end is returned 
    if (umap.find(key) == umap.end()) 
        cout << key << " not found\n\n"; 
  
    // If key found then iterator to that key is returned 
    else
        cout << "Found " << key << "\n\n"; 
  
    key = "lambda"; 
    if (umap.find(key) == umap.end()) 
        cout << key << " not found\n"; 
    else
        cout << "Found " << key << endl; 
  
    //    iterating over all value of umap 
    unordered_map<string, double>:: iterator itr; 
    cout << "\nAll Elements : \n"; 
    for (itr = umap.begin(); itr != umap.end(); itr++) 
    { 
        // itr works as a pointer to pair<string, double> 
        // type itr->first stores the key part  and 
        // itr->second stroes the value part 
        cout << itr->first << "  " << itr->second << endl; 
     } 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
Found PI

lambda not found

All Elements : 
e  2.718
loge  1
root3  1.732
log10  2.302
root2  1.414
PI  3.14
*/

// C++ program to find freq of every word using 
// unordered_map 
#include <iostream> 
#include <unordered_map> 
#include <sstream>
using namespace std; 
  
// Prints frequencies of individual words in str 
void printFrequencies(const string &str) 
{ 
    // declaring map of <string, int> type, each word 
    // is mapped to its frequency 
    unordered_map<string, int> wordFreq; 
  
    // breaking input into word using string stream 
    stringstream ss(str);  // Used for breaking words 
    string word; // To store individual words 
    while (ss >> word) 
        wordFreq[word]++; 
  
    // now iterating over word, freq pair and printing 
    // them in <, > format 
    unordered_map<string, int>:: iterator p; 
    for (p = wordFreq.begin(); p != wordFreq.end(); p++) 
        cout << "(" << p->first << ", " << p->second << ")\n"; 
} 
  
// Driver code 
int main() 
{ 
    string str = "geeks for geeks geeks quiz "
                 "practice qa for"; 
    printFrequencies(str); 
    return 0; 
}

/**
It is useful to use stringstream to breaking works. This code is useful in my project!
The Hashmap will initialize the int value as zero.

xu-Macbook:STL xushaoming$ ./a.out 
(qa, 1)
(practice, 1)
(for, 2)
(quiz, 1)
(geeks, 3)
*/

