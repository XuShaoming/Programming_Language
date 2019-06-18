# C++
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)
.Here I write my thoughts about specific language feature about C++.

- [C++ Reference](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/play_reference.cpp) :
  - In swap case we can see the function that takes reference as parameters is simple than that takes the pointers. 
  ```C++
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
  ```
- [C++ constructor and destructor](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/constructor_destructor.cpp)
  - If you have only one constructor, and you want it all arguments accept default value. Then it must be defined inside Class.
  ```C++
  Line::Line(double len=10){}
  /*
  error: addition of default argument on
        redeclaration makes this constructor a default constructor
  can't do this outside class. Inside class is fine.
  */
  ```
  - A concise way to define constructor
  ```C++
  Line::Line(double len): length(len){
   cout << "Object is being created, length = " << len<< endl;
  }
  ```
