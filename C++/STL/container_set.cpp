//https://www.geeksforgeeks.org/set-in-cpp-stl/
#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 

template <class T> 
void showset(T s) {

    for(auto itr = s.begin(); itr != s.end(); ++itr){
        cout << '\t' << *itr;
    }
    cout << endl;

} 
  
int main() 
{ 
    // empty set container 
    set <int, greater <int> > gquiz1;         
  
    // insert elements in random order 
    gquiz1.insert(40); 
    gquiz1.insert(30); 
    gquiz1.insert(60); 
    gquiz1.insert(20); 
    gquiz1.insert(50); 
    gquiz1.insert(50); // only one 50 will be added to the set 
    gquiz1.insert(10); 
  
    // printing set gquiz1 
    set <int, greater <int> > :: iterator itr; 
    cout << "\nThe set gquiz1 is : "; 
    showset(gquiz1);
  
    // assigning the elements from gquiz1 to gquiz2 
    set <int> gquiz2(gquiz1.begin(), gquiz1.end()); 
  
    // print all elements of the set gquiz2 
    cout << "\nThe set gquiz2 after assign from gquiz1 is : "; 
    showset(gquiz2);
  
    // remove all elements up to 30 in gquiz2 
    cout << "\ngquiz2 after removal of elements less than 30 : "; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); 
    showset(gquiz2);
  
    // remove element with value 50 in gquiz2 
    int num; 
    num = gquiz2.erase (50); 
    cout << "\ngquiz2.erase(50) : "; 
    cout << num << " removed \t" ; 
    showset(gquiz2);
  
    //lower bound and upper bound for set gquiz1 
    cout << "gquiz1.lower_bound(40) : "
         << *gquiz1.lower_bound(40) << endl; 
    cout << "gquiz1.upper_bound(40) : "
         << *gquiz1.upper_bound(40) << endl; 
  
    //lower bound and upper bound for set gquiz2 
    cout << "gquiz2.lower_bound(40) : "
         << *gquiz2.lower_bound(40) << endl; 
    cout << "gquiz2.upper_bound(40) : "
         << *gquiz2.upper_bound(40) << endl; 
  
    return 0; 
} 

/**
The C++ set is ordered container.
you can use code below to set the set in non decreasing order.
set <int, greater <int> > gquiz1;    
Template function and auto is useful to write identical function for differnt data types.



xu-Macbook:STL xushaoming$ ./a.out 

The set gquiz1 is :     60  50  40  30  20  10

The set gquiz2 after assign from gquiz1 is :    10  20  30  40  50  60

gquiz2 after removal of elements less than 30 :     30  40  50  60

gquiz2.erase(50) : 1 removed        30  40  60
gquiz1.lower_bound(40) : 40
gquiz1.upper_bound(40) : 30
gquiz2.lower_bound(40) : 40
gquiz2.upper_bound(40) : 60
*/