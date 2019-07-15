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
- Miscellaneous Operators
  - Conditional Operator ( ? : )
    - Maybe the syntactic sugar for if..else.. [Example](Basic/ConditionalOperator.java)
  - instanceof Operator
    - This operator is used only for object reference variables. The operator checks whether the object is of a particular type (class type or interface type). [Example](Basic/InstanceofTest.java)
    - It is more like the functional programming feature. Not very OOP.
- Enhanced for loop in Java
  - It mainly used to traverse collection of elements including arrays.
  ```java
  for(declaration : expression) {/* Statements*/}
  ```
- wrapper classes
  - All the wrapper classes (Integer, Long, Byte, Double, Float, Short) are subclasses of the abstract class Number. Number has a set of methods we can use to manipulate wrapper classes.
  ```java
  public class Test {
     public static void main(String args[]) {
        Integer x = 5; // boxes int to an Integer object
        x =  x + 10;   // unboxes the Integer to a int
        System.out.println(x);
      }
  }
  ```
- Character Class
  - The Character class offers a number of useful class (i.e., static) methods for manipulating characters.
  ```java
  Character ch = new Character('a');
  ```
- Strings Class
  - In Java programming language, strings are treated as objects.
  - Creating Format Strings
  ```java
  System.out.printf("The value of the float variable is " +
                  "%f, while the value of the integer " +
                  "variable is %d, and the string " +
                  "is %s", floatVar, intVar, stringVar);
  // Use format() to reuse formatted string.
  String fs;
  fs = String.format("The value of the float variable is " +
                     "%f, while the value of the integer " +
                     "variable is %d, and the string " +
                     "is %s", floatVar, intVar, stringVar);
  System.out.println(fs);
  ```
- Arrays
  - syntax
  ```java
  //Declare array
  double[] myList;   // preferred way.
  //Creating array
  double[] myList = new double[10];
  //For each loops
  double[] myList = {1.9, 2.9, 3.4, 3.5};
  for (double element: myList) {
      System.out.println(element);
  }
  //Passing and returning Arrays to Methods
  public static int[] reverse(int[] list) {
       int[] result = new int[list.length];
       for (int i = 0, j = result.length - 1; i < list.length; i++, j--) {
          result[j] = list[i];
       }
       return result;
  }
  ```

- Measuring Elapsed Time
    - [Example](Basic/MeasuringElapsedTime.java)
      ```java
      long start = System.currentTimeMillis( );
      //Your tasks
      long end = System.currentTimeMillis( );
      long diff = end - start;
      System.out.println("Difference is : " + diff);
      ```

- Method Overloading
  - When a class has two or more methods by the same name but different parameters, it is known as method overloading. It is different from overriding. In overriding, a method has the same method name, type, number of parameters, etc. [Example](Basic/ExampleOverloading.java)

- Using Command-Line Arguments
    - A command-line argument is the information that directly follows the program's name on the command line when it is executed.[Example](Basic/CommandLine.java)

- The this keyword
  - **this** is a keyword in Java which is used as a reference to the object of the current class, with in an instance method or a constructor.
  - explicit constructor invocation
  ```java
      class Student {
        int age;
        Student() { this(20); }
        Student(int age) { this.age = age;}
      }
  ```
- Variable Arguments(var-args)
  - pass a variable number of arguments of the same type to a method. Must be the last parameter.
  > typeName... parameterName

  - [Example](Basic/VarargsDemo.java)
  ```java
    public static void printArray(double... numbers){
      for(double num : numbers)
        System.out.print(num + " ");
    }
  ```

- The finalize( ) Method
  - will be called just before an object's final destruction by the garbage collector. It can be used to ensure that an object terminates cleanly. if your program ends before garbage collection occurs, finalize( ) will not execute.
  ```java
    protected void finalize( ) {
     // finalization code here
    }
  ```

- [strictfp keyword](https://www.geeksforgeeks.org/strictfp-keyword-java/)
  - strictfp is a keyword in java used for restricting floating-point calculations and ensuring same result on every platform while performing operations in the floating-point variable. [Code](Basic/StrictfpExp.java)
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

### Access control
- Package
  - Detail see **\<Thinking in Java Access\>** Chapter Access Control. See [examples](AccessControl/Package).
  - On Mac:
    - Set CLASSPATH in .bash_profile
    - source .bash_profile

- Class/Static Variables.
  - Only one copy of each class variable per class
  - Can be used with final to set variable as constant. [Example](AccessControl/Employee.java)

- [Access Modifiers](https://www.tutorialspoint.com/java/java_access_modifiers.htm)
  - Using the private modifier is the main way that an object encapsulates itself and hides data from the outside world.
  - Protected access gives the subclass a chance to use the helper method or variable, while preventing a nonrelated class from trying to use it.
  - Access Control and Inheritance [Example](AccessControl/Dog.java).
    - Methods declared public in a superclass also must be public in all subclasses.
    - Methods declared protected in a superclass must either be protected or public in subclasses; they cannot be private.=
    - Methods declared private are not inherited at all, so there is no rule for them.

### Files and I/O
- Stream [Examples](IO/CopyFile.java)
    - Byte Streams
        - Java byte streams are used to perform input and output of 8-bit bytes. the most frequently used classes are, **FileInputStream** and **FileOutputStream**.
    - Character Streams
        - Java Character streams are used to perform input and output for 16-bit unicode. Most frequently used classes are, **FileReader** and **FileWriter**.
    - Standard Streams. [Example](IO/ReadConsole.java)
        - support for standard I/O where the user's program can take input from a keyboard and then produce an output on the computer screen. Three standard streams:
            - **Standard Input**: System.in
            - **Standard Output**: System.out
            - **Standard Error**: System.err
- hierarchy
    - a hierarchy of classes to deal with Input and Output streams.
    ![hierarchy of IO class](images/file_io.png "hierarchy of IO class")
- [File Class](https://www.tutorialspoint.com/java/java_file_class.htm). [Example](IO/FileDemo.java)
    - This class is used for creation of files and directories, file searching, file deletion, etc. The File object represents the actual file/directory on the disk
- Directories
    - A directory is a File which can contain a list of other files and directories. You use File object to manipulate directories.
    ```java
    // Create directory.
    String dirname = "temp/temp2";
    File d = new File(dirname);
    d.mkdirs();

    //Listing Directories
    file = new File("/tmp");
    paths = file.list();
    for(String path:paths){
        System.out.println(path);
    }
    ```


### Object and Classes
- Constructors
  - Java automatically provides a default constructor that initializes all member variables to zero. However, once you define your own constructor, the default constructor is no longer used.
- Abstract Class
  - An abstract class can never be instantiated. It cannot be both abstract and final (since a final class cannot be extended).
  - An abstract class may contain both abstract methods as well normal methods.
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
