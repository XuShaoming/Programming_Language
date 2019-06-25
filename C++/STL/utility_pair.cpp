//https://www.geeksforgeeks.org/pair-in-cpp-stl/

//CPP program to illustrate pair STL 
/*
#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
    pair <int, char> PAIR1 ; 
  
    PAIR1.first = 100; 
    PAIR1.second = 'G' ; 
  
    cout << PAIR1.first << " " ; 
    cout << PAIR1.second << endl ;

    pair <string,double> PAIR2 ("GeeksForGeeks", 1.23); 
    cout << PAIR2.first << " " ; 
    cout << PAIR2.second << endl ; 
  
    return 0; 
} 
*/
/**
Syntax:
 pair (data_type1, data_type2) Pair_name;

xu-Macbook:STL xushaoming$ ./a.out 
100 G
*/

//CPP program to illustrate auto-initializing of pair STL 
/*
#include <iostream> 
#include <utility> 
  
using namespace std; 
  
int main() 
{ 
    pair <int, double> PAIR1 ; 
    pair <string, char> PAIR2 ; 
  
    cout << PAIR1.first ;  //it is initialised to 0 
    cout << PAIR1.second ; //it is initialised to 0 
  
    cout << " "; 
  
    cout << PAIR2.first ;  //it prints nothing i.e NULL 
    cout << PAIR2.second ; //it prints nothing i.e NULL
    cout << endl;
  
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
00 
*/

/*
//CPP code to illustrate operators in pair 
#include <iostream> 
#include<utility> 
using namespace std; 
  
int main() 
{ 
    pair<int, int>pair1 = make_pair(1, 12); 
    pair<int, int>pair2 = make_pair(9, 12); 
  
  
    cout << (pair1 == pair2) << endl; 
    cout << (pair1 != pair2) << endl; 
    cout << (pair1 >= pair2) << endl; 
    cout << (pair1 <= pair2) << endl; 
    cout << (pair1 > pair2) << endl; 
    cout << (pair1 < pair2) << endl; 
  
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
0
1
0
1
0
1
*/
/*
#include <iostream> 
#include<utility> 
  
using namespace std; 
  
int main() 
{ 
    pair<char, int>pair1 = make_pair('A', 1); 
    pair<char, int>pair2 = make_pair('B', 2); 
  
    cout << "Before swapping:\n " ; 
    cout << " Contents of pair1 = " << pair1.first << " " << pair1.second << ";"; 
    cout << " Contents of pair2 = " << pair2.first << " " << pair2.second << ";"; 
    pair1.swap(pair2); 
  
    cout << "\nAfter swapping:\n "; 
    cout << " Contents of pair1 = " << pair1.first << " " << pair1.second << ";"; 
    cout << " Contents of pair2 = " << pair2.first << " " << pair2.second << ";";
    cout << endl;
  
    return 0; 
} 
*/
/**
xu-Macbook:STL xushaoming$ ./a.out 
Before swapping:
 Contents of pair1 = A 1Contents of pair2 = B 2
After swapping:
 Contents of pair1 = B 2Contents of pair2 = A 1
*/

//CPP program to illustrate pair in STL 
#include <iostream> 
#include <utility>  
#include <string>  
using namespace std; 
  
int main() 
{ 
    pair <string, int> g1; 
    pair <string, int> g2("Quiz", 3); 
    pair <string, int> g3(g2); 
    pair <int, int> g4(5, 10); 
  
    g1 = make_pair(string("Geeks"), 1); 
    g2.first = ".com"; 
    g2.second = 2; 
  
    cout << "This is pair g" << g1.second << " with "
        << "value " << g1.first << "." << endl << endl; 
  
    cout << "This is pair g" << g3.second 
        << " with value " << g3.first 
        << "This pair was initialized as a copy of "
        << "pair g2" << endl << endl; 
  
    cout << "This is pair g" << g2.second 
        << " with value " << g2.first 
        << "\nThe values of this pair were"
        << " changed after initialization."
        << endl << endl; 
  
    cout << "This is pair g4 with values "
        << g4.first << " and " << g4.second 
        << " made for showing addition. \nThe "
        << "sum of the values in this pair is "
        << g4.first+g4.second 
        << "." << endl << endl; 
  
    cout << "We can concatenate the values of"
        << " the pairs g1, g2 and g3 : "
        << g1.first + g3.first + g2.first << endl << endl; 
  
    cout << "We can also swap pairs "
        << "(but type of pairs should be same) : " << endl; 
    cout << "Before swapping, " << "g1 has " << g1.first 
        << " and g2 has " << g2.first << endl; 
    swap(g1, g2); 
    cout << "After swapping, "
        << "g1 has " << g1.first << " and g2 has " << g2.first << endl; 
  
    return 0; 
} 

/**
The pair is mutable.

xu-Macbook:STL xushaoming$ ./a.out 
This is pair g1 with value Geeks.

This is pair g3 with value QuizThis pair was initialized as a copy of pair g2

This is pair g2 with value .com
The values of this pair were changed after initialization.

This is pair g4 with values 5 and 10 made for showing addition. 
The sum of the values in this pair is 15.

We can concatenate the values of the pairs g1, g2 and g3 : GeeksQuiz.com

We can also swap pairs (but type of pairs should be same) : 
Before swapping, g1 has Geeks and g2 has .com
After swapping, g1 has .com and g2 has Geeks
*/


