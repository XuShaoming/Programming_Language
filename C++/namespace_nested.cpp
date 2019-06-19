#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
   
   // second name space
   namespace second_space {
      void func() {
         cout << "Inside second_space" << endl;
      }
      void func2(){
         cout << "Inside second_space, func2" << endl;
      }
   }
}

using namespace first_space;
int main () {
   // This calls function from second name space.
   func();
   second_space::func2();
   
   return 0;
}

/**

*/