#include <iostream>
using namespace std;

int main () {
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;

   return 0;
}

/**
Value of __LINE__ : 5
Value of __FILE__ : preprocessor_predefined_macro.cpp
Value of __DATE__ : Jun 19 2019
Value of __TIME__ : 13:58:08
*/