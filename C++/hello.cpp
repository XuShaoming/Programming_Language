/**
Come from
https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
*/

#include <iostream>
using namespace std;
 
// define is macro
#define WIDTH  5
#define NEWLINE '\n'

int fun1(){
	cout << "in fun1\n";
	//need to return a int otherwise compiler will give a warning.
	return 0;
}

int main(){

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(j % 2 == 1) break;
			cout << "j = " << j << endl;
		}
		cout << "i = " << i << endl;
	}

	/**
	play const and define.
	*/
	const int LENGTH = 10;
	// LENGTH = 11; // inlegal.
	cout << LENGTH <<endl;

	/**
	play with string. need \ if change line.
	*/
	cout << "\a"; // give a alert, interesting.
	cout << "abc  \
	cde"<<endl;

	/*play typedef*/
	//use typedef to create a new name for an existing type.



	typedef int meter;
	meter distance = 10;
	cout << distance << " meters" << endl;

	

	/*play enum*/
	// red=0, green=6. Since blue = green + 1; so blue should be 7
	enum color {red, green=6, blue, black} c;
	c = blue;
	// enum element is reachable outside enum definition
	cout << "blue is " << blue << endl;
	cout << "c is " << c << endl;

	/*play sizeof and endl*/
	// endl is a good way to end the cout
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	/*play return in normal function*/
	fun1();
	//However if omit the return in int main(), compiler works fine.
	return 0;
}