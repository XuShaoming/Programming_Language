//https://www.tutorialspoint.com/cplusplus/cpp_passing_pointers_to_functions.htm

#include <iostream>
#include <ctime>
 
using namespace std;
void getSeconds(unsigned long *par);
// function declaration:
double getAverage(int *arr, int size);
int * getRandom();

int main () {
   unsigned long sec;
   getSeconds( &sec );

   // print the actual value
   cout << "Number of seconds :" << sec << endl;



   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;
 
   // output the returned value 
   cout << "Average value is: " << avg << endl; 


   // a pointer to an int.
   int *p;
 
   p = getRandom();
   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }

   return 0;
}

void getSeconds(unsigned long *par) {
   // get the current number of seconds
   *par = time( NULL );
   
   return;
}

double getAverage(int *arr, int size) {
   int i, sum = 0;       
   double avg;          
 
   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;
 
   return avg;
}

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