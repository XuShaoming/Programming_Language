#include <iostream>
using namespace std;
 
/*
For the swap case, the reference one is more concise and elegant than
the pointer one.
*/

// function declaration
void swap(int& x, int& y);

void swap2(int* x, int* y);

// https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
 
   /* calling a function to swap the values.*/
   swap(a, b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   swap2(&a, &b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   cout << endl;
   cout << "Value before change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
 
   setValues(1) = 20.23; // change 2nd element
   setValues(3) = 70.8;  // change 4th element
 
   cout << "Value after change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }

 
   return 0;
}
 
// function definition to swap the values.
void swap(int& x, int& y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

void swap2(int *x, int *y) {
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   return;
}