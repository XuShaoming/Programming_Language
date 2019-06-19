// #include <iostream>
// using namespace std;

// // first name space
// namespace first_space {
//    void func() {
//       cout << "Inside first_space" << endl;
//    }
// }

// // second name space
// namespace second_space {
//    void func() {
//       cout << "Inside second_space" << endl;
//    }
// }

// using namespace first_space;
// int main () {
//    // This calls function from first name space.
//    func();
//    cout << "hello" << endl;
   
//    return 0;
// }

/**
Inside first_space
*/

#include <iostream>
using std::cout;

int main () {
   cout << "std::endl is used with std!" << std::endl;
   
   return 0;
}