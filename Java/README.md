# Java
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm) and [geeksforgeeks](https://www.geeksforgeeks.org/). Notes includes my thoughts and the good comments from the cited websites.

### Basic
- variable
  - Variables are nothing but reserved memory locations to store values.
  ```java
  //byte is type
  //a is variables
  //68 is Literal
  byte a = 68;
  ```
- Package
  - Detail see **\<Thinking in Java Access\>** Chapter Access Control. See [examples](Basic/Package).
  - On Mac:
    - Set CLASSPATH in .bash_profile
    - source .bash_profile


### Object and Classes
- Constructors
  -  Java automatically provides a default constructor that initializes all member variables to zero. However, once you define your own constructor, the default constructor is no longer used.
- Class/Static Variables.
  - Only one copy of each class variable per class
  - Can be used with final to set variable as constant. [Example](Basic/Employee.java)
- [How to Use Singleton Class](https://www.tutorialspoint.com/java/java_using_singleton.htm)
  - The Singleton's purpose is to control object creation, limiting the number of objects to only one. Singletons often control access to resources, such as database connections or sockets. [Code](ObjectAndClass/SingletonDemo.java)

### Multithreading
- [volatile keyword in Java](https://www.geeksforgeeks.org/volatile-keyword-in-java/)
  - **Mutual Exclusion**: It means that only one thread or process can execute a block of code (critical section) at a time.
  - **Visibility**: It means that changes made by one thread to shared data are visible to other threads.
  - Volatile variables have the visibility features of synchronized but not the atomicity features. The values of volatile variable will never be cached and all writes and reads will be done to and from the main memory.
- [Synchronized in Java](https://www.geeksforgeeks.org/synchronized-in-java/)
  - All synchronized blocks synchronized on the same object can only have one thread executing inside them at a time. All other threads attempting to enter the synchronized block are blocked until the thread inside the synchronized block exits the block. [Code](Multithreading/SyncDemo.java).
  - This synchronization is implemented in Java with a concept called monitors. I have learned this in OS course. See it [here](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_09__Process_Synchronization__II.pdf).

- [Serialization and Deserialization](https://www.geeksforgeeks.org/serialization-in-java/)
  - Serialization is a mechanism of converting the state of an object into a byte stream. Deserialization is the reverse process where the byte stream is used to recreate the actual Java object in memory.
  - Usage:
    - To save/persist state of an object.
    - To travel an object across a network.
  - Static data members and transient data members are not saved via Serialization process. See the [Code](Basic/SerializationExp.java):
  ```java
  transient int a;
  static int b;
  ```
  These two variables not saved via Serialization process.
- [strictfp keyword](https://www.geeksforgeeks.org/strictfp-keyword-java/)
  - strictfp is a keyword in java used for restricting floating-point calculations and ensuring same result on every platform while performing operations in the floating-point variable. [Code](Basic/StrictfpExp.java)
