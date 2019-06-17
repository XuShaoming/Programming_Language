//https://www.tutorialspoint.com/cplusplus/cpp_this_pointer.htm

#include <iostream>
 
using namespace std;

/**
1. you can set default parameter for constructor if you define it in Class.
   you can do it outside Class.
*/

class Box {
   public:
      // Constructor definition
      // can set default parameter if you define constructor inside Class.
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
      int compare(Box that) {
         return this->Volume() > that.Volume();
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1" <<endl;
   } else {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   
   return 0;
}