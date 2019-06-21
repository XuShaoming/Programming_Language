//https://www.geeksforgeeks.org/std-valarray-class-c/


// C++ code to demonstrate the working of  
// apply() and sum() 

/*
#include<iostream> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
    // Initializing valarray 
    valarray<int> varr = { 10, 2, 20, 1, 30 }; 
      
    // Declaring new valarray 
    valarray<int> varr1 ; 
      
    // Using apply() to increment all elements by 5 
    varr1 = varr.apply([](int x){return x=x+5;}); 
      
    // Displaying new elements value 
    cout << "The new valarray with manipulated values is : "; 
    for (int &x: varr1) cout << x << " "; 
    cout << endl; 
      
    // Displaying sum of both old and new valarray 
    cout << "The sum of old valarray is : "; 
    cout << varr.sum() << endl; 
    cout << "The sum of new valarray is : "; 
    cout << varr1.sum() << endl; 
  
    return 0; 
      
}
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The new valarray with manipulated values is : 15 7 25 6 35 
The sum of old valarray is : 63
The sum of new valarray is : 88
*/

// C++ code to demonstrate the working of  
// max() and min() 

/*
#include<iostream> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
    // Initializing valarray 
    valarray<int> varr = { 10, 2, 20, 1, 30 }; 
      
    // Displaying largest element of valarray 
    cout << "The largest element of valarray is : "; 
    cout << varr.max() << endl; 
      
    // Displaying smallest element of valarray 
    cout << "The smallest element of valarray is : "; 
    cout << varr.min() << endl; 
  
    return 0; 
      
}
*/
/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The largest element of valarray is : 30
The smallest element of valarray is : 1
*/



// C++ code to demonstrate the working of  
// shift() and cshift() 

/*
#include<iostream> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
    // Initializing valarray 
    valarray<int> varr = { 10, 2, 20, 1, 30 }; 
      
    // Declaring new valarray 
    valarray<int> varr1; 
      
    // using shift() to shift elements to left 
    // shifts valarray by 2 position 
    varr1 = varr.shift(2); 
      
    // Displaying elements of valarray after shifting 
    cout << "The new valarray after shifting is : "; 
    for ( int&x : varr1) cout << x << " "; 
    cout << endl; 
      
    // using cshift() to circulary shift elements to right 
    // rotates valarray by 3 position 
    varr1 = varr.cshift(-3); 
      
    // Displaying elements of valarray after circular shifting 
    cout << "The new valarray after circular shifting is : "; 
    for ( int&x : varr1) cout << x << " "; 
    cout << endl; 
  
    return 0; 
      
} 
*/

/**
myous-MacBook-Pro:STL xushaoming$ ./a.out 
The new valarray after shifting is : 20 1 30 0 0 
The new valarray after circular shifting is : 20 1 30 10 2 
*/



// C++ code to demonstrate the working of  
// swap() 
#include<iostream> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
   // Initializing 1st valarray 
    valarray<int> varr1 = {1, 2, 3, 4}; 
       
    // Initializing 2nd valarray 
    valarray<int> varr2 = {2, 4, 6, 8}; 
       
     // Displaying valarrays before swapping 
     cout << "The contents of 1st valarray "
             "before swapping are : "; 
     for (int &x : varr1) 
         cout << x << " "; 
     cout << endl; 
     cout << "The contents of 2nd valarray "
             "before swapping are : "; 
     for (int &x : varr2) 
         cout << x << " "; 
     cout << endl; 
    
     // Use of swap() to swap the valarrays 
     varr1.swap(varr2); 
    
     // Displaying valarrays after swapping 
     cout << "The contents of 1st valarray "
             "after swapping are : "; 
     for (int &x : varr1) 
         cout << x << " "; 
     cout << endl; 
    
     cout << "The contents of 2nd valarray "
             "after swapping are : "; 
     for (int &x : varr2) 
         cout << x << " "; 
     cout << endl; 
  
    return 0; 
      
}

/**

myous-MacBook-Pro:STL xushaoming$ ./a.out 
The contents of 1st valarray before swapping are : 1 2 3 4 
The contents of 2nd valarray before swapping are : 2 4 6 8 
The contents of 1st valarray after swapping are : 2 4 6 8 
The contents of 2nd valarray after swapping are : 1 2 3 4 
*/