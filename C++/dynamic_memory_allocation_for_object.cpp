#include <iostream>
using namespace std;

class Box {

   public:
      static int count; 
      Box() { 
         cout << "Constructor " << count++ <<" called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor "<< --count <<" called!" <<endl; 
      }
};

int Box::count = 1;

int main() {
   Box* myBoxArray = new Box[4];
   delete [] myBoxArray; // Delete array

   return 0;
}

/**
way to initialize static member of class
int Box::count = 1; 


Constructor 1 called!
Constructor 2 called!
Constructor 3 called!
Constructor 4 called!
Destructor 4 called!
Destructor 3 called!
Destructor 2 called!
Destructor 1 called!
*/