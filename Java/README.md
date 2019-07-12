# Java
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)

### Multithreading
- [volatile keyword in Java](https://www.geeksforgeeks.org/volatile-keyword-in-java/)
  - **Mutual Exclusion**: It means that only one thread or process can execute a block of code (critical section) at a time.
  - **Visibility**: It means that changes made by one thread to shared data are visible to other threads.
  - Volatile variables have the visibility features of synchronized but not the atomicity features. The values of volatile variable will never be cached and all writes and reads will be done to and from the main memory.
