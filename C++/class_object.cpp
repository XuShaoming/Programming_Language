/**
From
https://www.geeksforgeeks.org/c-classes-and-objects/
*/

// C++ program to demonstrate  
// accessing of data members  
  
#include <iostream> 
using namespace std; 
class Geeks 
{ 
    public: 
    int id; 
      
    //Default Constructor 
    Geeks() 
    { 
        cout << "Default Constructor called" << endl;  
        id=-1; 
    } 
      
    //Parametrized Constructor 
    Geeks(int x) 
    { 
        cout << "Parametrized Constructor called" << endl; 
        id=x; 
    } 

    //Definition for Destructor 
    ~Geeks() 
    { 
        cout << "Destructor called for id: " << id <<endl;  
    } 
}; 
int main() { 
      
    // obj1 will call Default Constructor 
    Geeks obj1; 
    cout << "Geek id is: " <<obj1.id << endl; 
      
    // obj1 will call Parametrized Constructor 
    Geeks obj2(21); 
    cout << "Geek id is: " <<obj2.id << endl; 

    // play with Destructor
    cout << "\nplay with Destructor" << endl;
    for(int i  = 0; i < 2; i++){
        Geeks obj3(i);
        obj3.id=i;
    }

    Geeks obj4(31);

    /**
    This output shows the object may be put in a stack. FILO.
    Destructor called for id: 31
    Destructor called for id: 21
    Destructor called for id: -1
    */

    return 0; 
} 