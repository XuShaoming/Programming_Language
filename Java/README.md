# Java
This repository includes the examples from the [C++ Quick Guide](https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm)

### Multithreading
- [volatile keyword in Java](https://www.geeksforgeeks.org/volatile-keyword-in-java/)
  - **Mutual Exclusion**: It means that only one thread or process can execute a block of code (critical section) at a time.
  - **Visibility**: It means that changes made by one thread to shared data are visible to other threads.
  - Volatile variables have the visibility features of synchronized but not the atomicity features. The values of volatile variable will never be cached and all writes and reads will be done to and from the main memory.
- [Synchronized in Java](https://www.geeksforgeeks.org/synchronized-in-java/)
  - All synchronized blocks synchronized on the same object can only have one thread executing inside them at a time. All other threads attempting to enter the synchronized block are blocked until the thread inside the synchronized block exits the block [[Example](https://github.com/XuShaoming/Programming_Language/blob/master/Java/Multithreading/SyncDemo.java)].
  - This synchronization is implemented in Java with a concept called monitors. I have learned this in OS course. See it [here](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_09__Process_Synchronization__II.pdf).
