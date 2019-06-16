#include <iostream>

using namespace std;

int main () {

	int *ptr = NULL;
    int var=0;
    ptr=&var;
    var++;

    cout << "var " << var << endl;
    cout << "*ptr " << *ptr << endl;

    cout << "ptr" << ptr <<endl;
    ptr++;// pointer arithmetic
    cout << "ptr" << ptr <<endl;
    cout << "*ptr " << *ptr << endl << endl;

	int  var2 = 20;   // actual variable declaration.
	int  *ip = NULL;        // pointer variable 

	ip = &var2;       // store address of var in pointer variable

	cout << "Value of var variable: ";
	cout << var2 << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}