// https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm


/**
It seems in Class, you need allocate memory for the pointer by youself.
But in main function, for primitive type pointers, system will automatically
allocate the memory. 
*/

#include <iostream>

using namespace std;

class Line {

   public:
      int getLength( void );
      void setLength(int len);
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
      ~Line();                     // destructor

   private:
      int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;
   
   // allocate memory for the pointer;
   // witout it. Segmentation fault happens.
   ptr = new int;
   *ptr = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   ptr = new int;
   *ptr = *obj.ptr; // copy the value
}

Line::~Line(void) {
   cout << "Freeing memory!" << endl;
   delete ptr;
}

int Line::getLength( void ) {
   return *ptr;
}

void Line::setLength(int len) {
	*ptr = len;
}

void display(Line obj) {
   cout << "Length of line : " << obj.getLength() <<endl;
}

// Main function for the program
int main() {
	// in main function. This is ok.
	int *ptr;
	*ptr = 20;
	cout<< "*ptr = "<<*ptr << endl;

   Line line(10);
   Line line2 = line; // This also calls copy constructor
   line.setLength(20);

   display(line);
   display(line2);

   return 0;
}

/**
Result shows line2 and line are different object in different memory space.


*ptr = 20
Normal constructor allocating ptr
Copy constructor allocating ptr.
Copy constructor allocating ptr.
Length of line : 20
Freeing memory!
Copy constructor allocating ptr.
Length of line : 10
Freeing memory!
Freeing memory!
Freeing memory!

*/





