/**
https://www.tutorialspoint.com/cplusplus/cpp_array_of_pointers.htm
*/

#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
const char *names[MAX] = { "Zara Ali", "Hina Alina", "Nuha Ali", "Sara Ali" };

   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << *(names + i) << endl;
   }
   
   return 0;
}