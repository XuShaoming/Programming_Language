/**
https://www.tutorialspoint.com/cplusplus/cpp_pointer_arithmatic.htm
*/

#include <iostream>

using namespace std;
const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // let us have array address in pointer.
    cout <<"\nIncrementing a Pointer " <<endl;
   ptr = var;
   
   for (int i = 0; i < MAX; i++) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the next location
      ptr++;
   }

   cout <<"\nDecrementing a Pointer " <<endl;
   ptr = &var[MAX-1];
   
   for (int i = MAX; i > 0; i--) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the previous location
      ptr--;
   }

   cout <<"\nPointer Comparisons " <<endl;
   // let us have address of the first element in pointer.
   ptr = var;
   int i = 0;
   
   while ( ptr <= &var[MAX - 1] ) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the previous location
      ptr++;
      i++;
   }
   
   return 0;
}