#include <iostream>

using namespace std;

class Box {

   public:
      double length;         // Length of a box
      

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
      double getHeight();

   protected:
      double breadth;        // Breadth of a box

   private:
      double height;         // Height of a box

};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}

double Box::getHeight(){
   return height;
}


class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setSmallBreadth( double bre );
      double getSmallBreadth( void );
};

// Member functions of child class
double SmallBox::getSmallBreadth(void) {
   return breadth ;
}
 
void SmallBox::setSmallBreadth( double bre ) {
   breadth = bre;
}



// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

   //Compile error: 'height' is a private member of 'Box'
   //cout << "Height of BOX1 : " << Box1.height <<endl;
   cout << "Height of Box1 : " << Box1.getHeight() <<endl;

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;


   SmallBox box;
   // set box width using member function
   box.setSmallBreadth(5.0);
   cout << "Breadth of Smallbox : "<< box.getSmallBreadth() << endl;


   return 0;
}


