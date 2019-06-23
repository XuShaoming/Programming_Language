//https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 

template <class T> 
void showmap(T s) {

    for(auto itr = s.begin(); itr != s.end(); ++itr){
        cout << '\t' << itr->first
             << '\t' << itr->second <<endl;
    }
    cout << endl;
} 

int main() 
{ 
  
    // empty map container 
    map<int, int> gquiz1; 
  
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz1.insert({7,30}); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(5, 20)); 
    gquiz1.insert(pair<int, int>(4, 50)); 
    gquiz1.insert(pair<int, int>(2, 50)); 
    gquiz1.insert(pair<int, int>(6, 10)); 
  
    // printing map gquiz1 
    map<int, int>::iterator itr; 
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n";
    showmap(gquiz1);
  
    // assigning the elements from gquiz1 to gquiz2 
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end()); 
  
    // print all elements of the map gquiz2 
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    showmap(gquiz2);
  
    // remove all elements up to 
    // element with key=3 in gquiz2 
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    showmap(gquiz2);

    // remove all elements with key = 4 
    int num; 
    num = gquiz2.erase(4); 
    cout << "\ngquiz2.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    showmap(gquiz2);
  
    // lower bound and upper bound for map gquiz1 key = 5 
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.lower_bound(5)->second << endl; 
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.upper_bound(5)->second << endl; 
  
    return 0; 
} 

/**
From result we can see map is ordered by key by non decreasing order.

https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
C++ insert function accept pair which includes {key, value};
gquiz1.insert(pair<int, int>(1, 40)); 
gquiz1.insert({7,30});
both are fine.
remember makes gquiz1.insert({7,30}); works need to add
-std=c++11 -stdlib=libc++
when compile codes.




xu-Macbook:STL xushaoming$ ./a.out 

The map gquiz1 is : 
    KEY ELEMENT
    1   40
    2   50
    3   60
    4   50
    5   20
    6   10
    7   30


The map gquiz2 after assign from gquiz1 is : 
    KEY ELEMENT
    1   40
    2   50
    3   60
    4   50
    5   20
    6   10
    7   30


gquiz2 after removal of elements less than key=3 : 
    KEY ELEMENT
    3   60
    4   50
    5   20
    6   10
    7   30


gquiz2.erase(4) : 1 removed 
    KEY ELEMENT
    3   60
    5   20
    6   10
    7   30

gquiz1.lower_bound(5) :     KEY = 5     ELEMENT = 20
gquiz1.upper_bound(5) :     KEY = 6     ELEMENT = 10
*/






