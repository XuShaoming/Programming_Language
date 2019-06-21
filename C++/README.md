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
  
- [Polymorphism](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/polymorphism.cpp)
  - virtual function supports late binding. This is very convenient.
  ```c++
  // virtual int area() {
      //    cout << "Parent class area :" <<endl;
      //    return 0;
      // }

  //pure virtual function
  virtual int area() = 0;
  ```
- [Operators overloading](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/operators_overloading.cpp)
  - operators overloading is a very useful language feature especially when you need to define  different operations like + - < > for classes.
  ```c++
  Box operator+(const Box& b) {
     Box box;
     box.length = this->length + b.length;
     box.breadth = this->breadth + b.breadth;
     box.height = this->height + b.height;
     return box;
  }
  ```
- [Static members](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/oop/static_member.cpp)
  - Static functions only can access static values. Static members are shared by all objects of that class.
- [const](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/const.cpp)
  - A function becomes const when const keyword is used in function’s declaration. The idea of const functions is not allow them to modify the object on which they are called. It is recommended practice to make as many functions const as possible so that accidental changes to objects are avoided.--[GeeksfoGeeks](https://www.geeksforgeeks.org/const-member-functions-c/)
  ```c++
  // We get compiler error if we add a line like "value = 100;" 
  // in this function. 
  int getValue() const {return value;}   
  ```
- [Define new Exception](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/define_new_exception.cpp)
  - what() is a public method provided by exception class and it has been overridden by all the child exception classes. This returns the cause of an exception.
  ```c++ 
  struct MyException : public exception {
   const char * what () const throw () {
      return "C++ Exception";
   }
  };
  ```
- Preprocessor
  - Give instructions to the compiler to preprocess the information before actual compilation starts. It can be used to write macro. macro will be replaced by replacement-text before the program is compiled. You can check it use gcc -E test.cpp > test.p 
  - [The # and ## Operators](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/preprocessor_sharpSign.cpp) The # operator causes a replacement-text token to be converted to a string surrounded by quotes. The ## operator is used to concatenate two tokens.
  
- [Signal Function](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/signal_function.cpp)\
  - Using Conditional Compilation is a good way to make c and c++ code works on cross platforms.
  - We can use signal function to handle the signal from operating system. This is pretty useful.
  ```c++
  void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
  ```
  
  
