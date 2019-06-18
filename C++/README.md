# C++
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)
.Here I write my thoughts about specific language feature about C++.

- [Reference](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/play_reference.cpp) :
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
- [constructor and destructor](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/constructor_destructor.cpp)
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
  // length(len). The length is the name of a class variable
  ```
  
- [copy constructor](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/copy_constructor.cpp)
  - Code shows the main function will automatically assign memeory space for primitie type pointers. But the Class can't. It means you need to allocate the memeory space for the pointers before assigning value on it in class methods. Otherwise it will trigger segment fault. 

- [Friend function](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/friend_function.cpp)
  - you can use one friend function to access many different class private values. This is a way to make code concise. However it is bad on Data Encapsulation. Basically, The ideal is to keep as many of the details of each class hidden from all other classes as possible. So be careful when using fridend function.
  
- [Multiple_Inheritance](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/multiple_inheritance.cpp)
  - Java dosen't support multiple inheritance. Java class only supports to be child from single parent, but support implement multiple interfaces. And all Java class are rooted from object class which forms a big trees.
  - But C++ doesn't hold a root class. So it makes a big forest. detail comes from [geeksforgeess](https://www.geeksforgeeks.org/comparison-of-inheritance-in-c-and-java)
