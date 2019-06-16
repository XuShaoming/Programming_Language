/**
From
https://www.geeksforgeeks.org/namespace-in-c/
*/

// A C++ program to demonstrate use of class 
// in a namespace 
#include <iostream> 
using namespace std;

namespace ns 
{ 
	// A Class in a namespace 
	class geek 
	{ 
	public: 
		void display() 
		{ 
			cout << "ns::geek::display()\n"; 
		} 
	}; 
} 

// Creating a namespace 
namespace ns2
{ 
    void display(); 
    class geek 
    { 
    public: 
       void display(); 
    }; 
} 

// A C++ code to demonstrate that we can define  
// methods outside namespace. 
// Defining methods of namespace 
void ns2::geek::display() 
{ 
    cout << "ns::geek::display()\n"; 
} 
void ns2::display() 
{ 
    cout << "ns::display()\n"; 
} 

namespace ns3 
{ 
    // Only declaring class here 
    class geek; 
} 
  
// Defining class outside 
class ns3::geek 
{ 
public: 
    void display() 
    { 
        cout << "ns::geek::display()\n"; 
    } 
};



int main() 
{ 
	// Creating Object of student Class 
	// here do not need to use new to create object?
	cout << "Student1\n";
	ns::geek obj; 
	obj.display(); 

	//Creating Object of student2 Class
	cout << "\nStudent2\n";
	ns2::geek obj2; 
    ns2::display(); 
    obj2.display();

    //Creating Object of student3 Class 
    cout << "\nStudent3\n";
    ns3::geek obj3; 
    obj3.display(); 

	return 0; 
} 