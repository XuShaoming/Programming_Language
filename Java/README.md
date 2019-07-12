# Java
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)

### Multithreading
- [volatile keyword in Java](https://www.geeksforgeeks.org/volatile-keyword-in-java/)
  - **Mutual Exclusion**: It means that only one thread or process can execute a block of code (critical section) at a time.
  - **Visibility**: It means that changes made by one thread to shared data are visible to other threads.
  - Volatile variables have the visibility features of synchronized but not the atomicity features. The values of volatile variable will never be cached and all writes and reads will be done to and from the main memory.
- [Synchronized in Java](https://www.geeksforgeeks.org/synchronized-in-java/)
  - All synchronized blocks synchronized on the same object can only have one thread executing inside them at a time. All other threads attempting to enter the synchronized block are blocked until the thread inside the synchronized block exits the block [Example](Multithreading/SyncDemo.java) (**add link later**).
  - This synchronization is implemented in Java with a concept called monitors. I have learned this in OS course. See it [here](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_09__Process_Synchronization__II.pdf).

- [Serialization and Deserialization](https://www.geeksforgeeks.org/serialization-in-java/)
  - Serialization is a mechanism of converting the state of an object into a byte stream. Deserialization is the reverse process where the byte stream is used to recreate the actual Java object in memory.
  - Usage:
    - To save/persist state of an object.
    - To travel an object across a network.
  - Static data members and transient data members are not saved via Serialization process. See the example:
  ```java
  transient int a;
  static int b;
  ```
  These two variables not saved via Serialization process.
- [strictfp keyword](https://www.geeksforgeeks.org/strictfp-keyword-java/)
  - strictfp is a keyword in java used for restricting floating-point calculations and ensuring same result on every platform while performing operations in the floating-point variable.
