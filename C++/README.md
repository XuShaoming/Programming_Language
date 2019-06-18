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
  
