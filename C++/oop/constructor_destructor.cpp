#include <iostream>
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor
      Line(double len);
      ~Line(); // This is the destructor: declaration
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}

/**
Line::Line(double len=10){}
error: addition of default argument on
      redeclaration makes this constructor a default constructor

can't do this outside class. Inside class is fine.
*/

/*
// Method 1
Line::Line(double len){
   length = len;
   cout << "Object is being created" << endl;
}
*/
/* Method 2
length(len). The length is the name of private variable
*/
Line::Line(double len): length(len){
   cout << "Object is being created, length = " << len<< endl;
}

Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}

void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;
   Line line2(12);
 
   // set line length
   //line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
   cout << "Length of line2 : " << line2.getLength() <<endl;
   return 0;
}