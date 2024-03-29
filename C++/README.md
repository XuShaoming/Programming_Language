# C++
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)
(STL part from [GeeksforGeeks](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)).Here I write my notes about specific language feature about C++. Some of my notes from the references mentioned above.

- Some C++11 features require add ```-std=c++11``` to be accepted by compiler.
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
  
- [Signal Function](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/signal_function.cpp)
  - Using Conditional Compilation is a good way to make c and c++ code works on cross platforms.
  - We can use signal function to handle the signal from operating system. This is pretty useful.
  ```c++
  void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
  ```
  Signal handler needed to be registed to be used.
  ```c++
  signal(SIGINT, signalHandler);  
  ```
  - You also can raise a signal from your program.see [here](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/signal_raise.cpp)..
  ```c++
  raise( SIGINT);
  ```
- [POXIS](https://github.com/XuShaoming/Programming_Language/tree/master/C%2B%2B/POSIX)
  - One interesing part is to see how C++ takes function as the parameter and how it to provide data to thread. See it [here](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/POSIX/passing_argument.cpp)
  
- [IO read and write](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/io/read_write.cpp)
- [Type Inference in C++ (auto and decltype)](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/auto_decltype.cpp)
  - C++ Type Inference happens in compilation time. It uses auto and decltype keyword. 
  ```c++
  auto x = 4; 
  cout << typeid(x).name() << endl //this shows the type name. Hear is i means integer.
  decltype(fun2()) y; // this makes the type of y same as the type of fun2() //char fun2() { return 'g'; } 
  ```
  - Type inference is useful when to write templates. See this [example](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_set.cpp), showSet() template function which use auto to meet make the function even general.
  ```c++
  template <class T> 
  void showset(T s) {

    for(auto itr = s.begin(); itr != s.end(); ++itr){
        cout << '\t' << *itr;
    }
    cout << endl;

  } 
  ```
- Template
  - Templates are expanded at compiler time. This is like macros. The difference is, compiler does type checking before template expansion. C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by keyword ‘class’.
  - The way to get C type array size uses code likes:
  ```c++
  int n = sizeof(a) / sizeof(a[0]);
  ```
  - [Function template](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/template_function.cpp).We write a generic function that can be used for different data types.
  - [Class template](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/template_array_class.cpp). class templates are useful when a class defines something that is independent of data type
  - We can multiple and default arguments for template. [Example](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/template_multiple_default_arguments.cpp)
  - [Template Specialization](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/template_specialization.cpp). makes C++ to get a special behavior for a particular data type. In the same time, allow C++ use template to handle the general data types.
  ```c++
  // A generic sort function  
  template <class T> 
  void sort(T arr[], int size) 
  { 
      // code to implement Quick Sort 
  } 

  // Template Specialization: A function  
  // specialized for char data type 
  template <> 
  void sort<char>(char arr[], int size) 
  { 
      // code to implement counting sort 
  } 
  ```
  - [Template and static variable](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/template_static_variabels.cpp). Each instantiation of class template has its own copy of member static variables.
- [Anonymous Function](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/algorithms_array.cpp). C++ lambda function is introduced by C++11. Add ```c++ -std=c++11``` when to comiple. 
  - It is interesting to see some manipulations on array need to use anonymous functions.
  ```c++
  int ar[6] =  {1, 2, 3, 4, 5, -6}; 
  // Checking if all elements are positive
  all_of(ar, ar+6, [](int x) { return x>0; })? 
          cout << "All are positive elements" : 
          cout << "All are not positive elements"; 
          
  // Checking if any element is negative 
    any_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 
  // Checking if no element is negative 
    none_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "No negative elements" : 
          cout << "There are negative elements"; 
  ```
  - copy_n() is deep copy of an array. ```c++ copy_n(ar, 6, ar1); ```
- [std::partition](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/algorithms_partition.cpp) is a good way to partition an array by given rule. And stable_partition(beg, end, condition) keep result obey the origin order. This is good. 
- [Container and Adaptor Container Summary](http://www.cplusplus.com/reference/stl/)
- [Vector](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_vector.cpp)
  - resize() will truncate the vector. use shrink_to_fit() if you want to save space.
  - emplace() and emplace_back() introduced by C++11. need:  ``` g++ -std=c++11 -stdlib=libc++ ```
  - Vector likes Java ArrayList.
  - Inserting and erasing at the beginning or in the middle is linear in time[2](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
- [List](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_list.cpp)
  - It is doubly linked list.
- [Deque](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_deque.cpp).
  - Double Ended Queues is a special kind of queue which allows push and pop from both front and end. The normal queue allows insertion only at the end and deletion from the front. such as Java Queue. But Java Queue is an interface, usually we use Java LinkedList to make Java Quene.
- [Array Class](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_array.cpp).
  - Is prefered over the C style array.
  - C++ does not initialize the array class with default value.
- [Forward List](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_forward_list.cpp)
  - It is Singly linked list. Introduced by C++11.
  - remove_():- This function removes according to the condition in its argument.
  ```c++ flist.remove_if([](int x){ return x>20;});  ```
  - splice_after() :- This function transfers elements from A forward list to B. A points to null.
- [Queue](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_queue.cpp)
  - Queue is a adaptor container. Prefered over deque if you just want a ordinary queue.
- [Priority Queue](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_priority_queue.cpp)
  - the first element of the queue is the greatest of all elements in the queue and elements are in non decreasing order.
  - Code below will not affect original queue. It shows the function operated on copied queue. You need to use & or * to operate the original queue. This is different from Java[[example](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/ContainPriorityQueue.java)]. 
  ```c++
  void showq(queue <int> gq) 
  {   
    while (!gq.empty()) 
    { 
        cout << ' ' << gq.front(); 
        gq.pop(); 
    } 
    cout << '\n'; 
  }
  ```
- [Stack](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_stack.cpp) support last in first out.
- [Set](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_set.cpp)
  - Sets are typically implemented as binary search trees[[1](http://www.cplusplus.com/reference/set/set/)]. So Set keeps increasing order by its keys. But if you want non increasing order. You can write code likes this: 
  ```c++ set <int, greater <int> > gquiz1; ```
- [Multiset](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_multiset.cpp)
  - Multiset are a type of associative containers similar to set, with an exception that multiple elements can have same values.
  - It also implemented as binary search trees.
- [Map](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_map.cpp)
  - C++ Maps are typically implemented as binary search trees. See the result, they are ordered by keys on non decreasing order.
  - I write a template function to show the elements in map.
  ```c++
  template <class T> 
  void showmap(T s) {

    for(auto itr = s.begin(); itr != s.end(); ++itr){
        cout << '\t' << itr->first
             << '\t' << itr->second <<endl;
    }
    cout << endl;
  } 
  ```
- [Multimap](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_multimap.cpp) is similar to map with an addition that multiple elements can have same keys.
- [unordered set](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_unordered_set.cpp).
  - unordered_set is implemented using hash table where keys are hashed into indices of this hash table so it is not possible to maintain an order. This likes the Java HashSet.
  - Time complexity of set operations is O(Log n) while for unordered_set, it is O(1).
  - The iterator works as pointer to key values so we can get key by dereferencing them by *.
  ```c++
  // iterator itr loops from begin() till end() 
    for (itr = duplicate.begin(); itr != duplicate.end(); itr++) 
        cout << *itr << " "; 
  ```
- [unordered_multiset](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_unordered_multiset.cpp)
  - You can initialize unoroder_multiset uses {}. This is supported by C++11.
  - We can delete only one copy of some value by using find function and iterator version of erase.
- [unordered_map](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_unordered_map.cpp)
  - Internally unordered_map is implemented using Hash Table. Likes Java HashMap.
  - Time complexity of map operations is O(Log n) while for unordered_set, it is O(1) on average.
  - It is useful to use stringstream to breaking works. 
  - The unordered_map will initialize the int value as zero.
  ```c++
  void printFrequencies(const string &str) 
  { 
    // declaring map of <string, int> type, each word 
    // is mapped to its frequency 
    unordered_map<string, int> wordFreq; 
  
    // breaking input into word using string stream 
    stringstream ss(str);  // Used for breaking words 
    string word; // To store individual words 
    while (ss >> word) 
        wordFreq[word]++; 
  
    // now iterating over word, freq pair and printing 
    // them in <, > format 
    unordered_map<string, int>:: iterator p; 
    for (p = wordFreq.begin(); p != wordFreq.end(); p++) 
        cout << "(" << p->first << ", " << p->second << ")\n"; 
  } 
  ```
- [unordered_multimap](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/container_unordered_multimap.cpp)
  - The internal implementation of unordered_multimap is same as that of unordered_map but for duplicate keys another count value is maintained with each key-value pair.
  - This assignment make a new copy.
  ```c++
    // Initialization by assignment operation 
    umm1 = umm2;
  ```
  - It can insert multiple pairs in the same time.
  ```c++
  // insertion by initializer list 
  umm2.insert({{"alpha", 12}, {"beta", 33}}); 
  ```
- [Functor](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/function_functors.cpp)
- [Iterators](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/iterators.cpp)
  - There are five types of iterators.[see](https://www.geeksforgeeks.org/input-iterators-in-cpp/)
- [Pair](https://github.com/XuShaoming/Programming_Language/blob/master/C%2B%2B/STL/utility_pair.cpp)
  - The pair is mutable.
  
    

  
