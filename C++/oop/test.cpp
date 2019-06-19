#include <iostream>
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double wid, double len);
      ~Line(); // This is the destructor: declaration
   private:
      double length;
      double width;
};

Line::Line(double wid, double len=10) {
         length = len;
         width = wid;
}
/**
error: addition of default argument on
      redeclaration makes this constructor a default constructor
can't do this outside class. Inside class is fine.
*/

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
   Line line(11,12);
   Line line2(13,14);
 
   // set line length
   //line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
   cout << "Length of line2 : " << line2.getLength() <<endl;
   return 0;
}