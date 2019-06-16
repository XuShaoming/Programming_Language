#include <iostream>
#include <ctime>
using namespace std;
 
// find length of array
// https://stackoverflow.com/questions/4108313/how-do-i-find-the-length-of-an-array

// function to generate and retrun random numbers.
int * getRandom( ) {

   static int  r[10];

   // set the seed
   srand( (unsigned)time( NULL ) );
   
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      cout << r[i] << endl;
   }

   return r;
}


int main () {
   // an array with 5 elements.
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;

   p = balance;
   cout << sizeof(balance) << endl;
   cout << sizeof(balance[0]) << endl;
   cout << "Length of array = " << (sizeof(balance)/sizeof(*balance)) << endl;

   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }

   /**get return array*/
   int *q;
   q = getRandom();
   for ( int i = 0; i < 10; i++ ) {
      cout << "*(q + " << i << ") : ";
      cout << *(q + i) << endl;
   }

   return 0;
}