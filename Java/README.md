# Java
This repository includes the examples from the [Java Quick Guide](https://www.tutorialspoint.com/java/java_quick_guide),  [geeksforgeeks](https://www.geeksforgeeks.org/) and [The Java™ Tutorials](https://docs.oracle.com/javase/tutorial/index.html). Notes includes my thoughts and the good comments from the cited websites.

### Basic
- **variable**
  - Variables are nothing but reserved memory locations to store values.
  ```java
  //byte is type
  //a is variables
  //68 is Literal
  byte a = 68;
  ```

- **Miscellaneous Operators**
  - Conditional Operator ( ? : )
    - Maybe the syntactic sugar for if..else.. [Example](Basic/ConditionalOperator.java)
  - instanceof Operator
    - This operator is used only for object reference variables. The operator checks whether the object is of a particular type (class type or interface type). [Example](Basic/InstanceofTest.java)
    - It is more like the functional programming feature. Not very OOP.

- **Enhanced for loop in Java**
  - It mainly used to traverse collection of elements including arrays.
  ```java
  for(declaration : expression) {/* Statements*/}
  ```

- **wrapper classes**
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

- **Character Class**
  - The Character class offers a number of useful class (i.e., static) methods for manipulating characters.
  ```java
  Character ch = new Character('a');
  ```

- **Strings Class**
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

- **Arrays**
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

- **Measuring Elapsed Time**
    - [Example](Basic/MeasuringElapsedTime.java)
      ```java
      long start = System.currentTimeMillis( );
      //Your tasks
      long end = System.currentTimeMillis( );
      long diff = end - start;
      System.out.println("Difference is : " + diff);
      ```

- **Method Overloading**
  - When a class has two or more methods by the same name but different parameters, it is known as method overloading. It is different from overriding. In overriding, a method has the same method name, type, number of parameters, etc. [Example](Basic/ExampleOverloading.java)

- **Using Command-Line Arguments**
    - A command-line argument is the information that directly follows the program's name on the command line when it is executed. [Example](Basic/CommandLine.java)

- **The this keyword**
  - **this** is a keyword in Java which is used as a reference to the object of the current class, with in an instance method or a constructor.
  - explicit constructor invocation
  ```java
      class Student {
        int age;
        Student() { this(20); }
        Student(int age) { this.age = age;}
      }
  ```

- **Variable Arguments(var-args)**
  - pass a variable number of arguments of the same type to a method. Must be the last parameter.
  > typeName... parameterName

  - [Example](Basic/VarargsDemo.java)
  ```java
    public static void printArray(double... numbers){
      for(double num : numbers)
        System.out.print(num + " ");
    }
  ```

- **The finalize( ) Method**
  - will be called just before an object's final destruction by the garbage collector. It can be used to ensure that an object terminates cleanly. if your program ends before garbage collection occurs, finalize( ) will not execute.
  ```java
    protected void finalize( ) {
     // finalization code here
    }
  ```

- [**strictfp keyword**](https://www.geeksforgeeks.org/strictfp-keyword-java/)
  - strictfp is a keyword in java used for restricting floating-point calculations and ensuring same result on every platform while performing operations in the floating-point variable. [Code](Basic/StrictfpExp.java)

### Access control
- **Package**
  - Detail see **\<Thinking in Java Access\>** Chapter Access Control. See [examples](AccessControl/Package) and [Java Quick Guide](https://www.tutorialspoint.com/java/java_quick_guide).
  - It is a good practice to group related classes. In general, a group uses reversed Internet domain name for its package names.
  - a folder with the given package name is created in the specified destination, and the compiled class files will be placed in that folder. [Sample Code](AccessControl/codes)
  ```
  # compile to given folder (absolute path)
  javac -d Destination_folder file_name.java
  # Run programs
  java PackageName.ClassName
  ```

  - On Mac:
    - Set CLASSPATH in .bash_profile
    - source .bash_profile

- **Class/Static Variables**
  - Only one copy of each class variable per class
  - Can be used with final to set variable as constant. [Example](AccessControl/Employee.java)

- [**Access Modifiers**](https://www.tutorialspoint.com/java/java_access_modifiers.htm)
  - Using the private modifier is the main way that an object encapsulates itself and hides data from the outside world.
  - Protected access gives the subclass a chance to use the helper method or variable, while preventing a nonrelated class from trying to use it.
  - Access Control and Inheritance [Example](AccessControl/Dog.java).
    - Methods declared public in a superclass also must be public in all subclasses.
    - Methods declared protected in a superclass must either be protected or public in subclasses; they cannot be private.=
    - Methods declared private are not inherited at all, so there is no rule for them.

### Files and I/O
- **Stream**
    - Byte Streams
        - Java byte streams are used to perform input and output of 8-bit bytes. the most frequently used classes are, **FileInputStream** and **FileOutputStream**.
    - Character Streams
        - Java Character streams are used to perform input and output for 16-bit unicode. Most frequently used classes are, **FileReader** and **FileWriter**.
    - Standard Streams. [Example](IO/ReadConsole.java)
        - support for standard I/O where the user's program can take input from a keyboard and then produce an output on the computer screen. Three standard streams:
            - **Standard Input**: System.in
            - **Standard Output**: System.out
            - **Standard Error**: System.err
    - [Examples](IO/CopyFile.java)

- **hierarchy**
    - a hierarchy of classes to deal with Input and Output streams.
    ![hierarchy of IO class](images/file_io.png "hierarchy of IO class")

- [**File Class**](https://www.tutorialspoint.com/java/java_file_class.htm)
    - This class is used for creation of files and directories, file searching, file deletion, etc. The File object represents the actual file/directory on the disk. [Example](IO/FileDemo.java)

- **Directories**
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
- **Constructors**
  - Java automatically provides a default constructor that initializes all member variables to zero. However, once you define your own constructor, the default constructor is no longer used.

- **Abstract Class**
  - An abstract class can never be instantiated. It cannot be both abstract and final (since a final class cannot be extended).
  - An abstract class may contain both abstract methods as well normal methods.

- [**How to Use Singleton Class**](https://www.tutorialspoint.com/java/java_using_singleton.htm)
  - The Singleton's purpose is to control object creation, limiting the number of objects to only one. Singletons often control access to resources, such as database connections or sockets. [Code](ObjectAndClass/SingletonDemo.java)
- **Nested Classes**
    - Inner Classes
        - Inner classes are a security mechanism in Java. Normal class can not be made private, but the inner class can. Inner classes are of three types
            1. Inner Class
            2. Method-local Inner Class
            3. Anonymous Inner Class
        - Inner Class
            - just need to write a class within a class, can be set as private.
            - Can use the inner class to access the private members of a class. [Examples](ObjectAndClass/InnerClass).
            ```java
            //instantiate the inner class
            Outer_Demo outer = new Outer_Demo();
            Outer_Demo.Inner_Demo inner = outer.new Inner_Demo();
            ```
        - [Method-local Inner Class](ObjectAndClass/InnerClass/Outerclass.java)
            - In Java, we can write a class within a method and this will be a local type. Like local variables, the scope of the inner class is restricted within the method.
        - Anonymous Inner Class
            - Anonymous Inner Class  s the inner class declared without a class name. We declare and instantiate it at the same time.Generally, they are used whenever you need to override the method of a class or an interface.
            - [Example](ObjectAndClass/InnerClass/Outer_class.java)
            ```java
            AnonymousInner an_inner = new AnonymousInner() {
                public void my_method() { /*your codes */}   
            };
            ```
            - Anonymous Inner Class as Argument [example](ObjectAndClass/InnerClass/AnonymousInnerClassArgument.java)
            ```java
            obj.my_Method(new My_Class() {
                public void Do() {}
            });
            ```

    - [Static Nested Class](ObjectAndClass/InnerClass/Outer.java)
        - Static Nested Class can be accessed without instantiating the outer class, using other static members. Can't access to the instance variables and methods of the outer class
        ```java
        class MyOuter {
           static class Nested_Demo {
           }
        }
        ```
    - hierarchy of Nested Classes
    ![hierarchy of Nested Classes](images/inner_classes.jpg "hierarchy of Nested Classes")

### Inheritance
- **extends Keyword**
    - used to inherit the properties of a class.
    - Syntax
    ```java
    class Super {}
    class Sub extends Super {}
    ```
    - Structure of [Sample code](OOP/My_Calculation.java).
    ![inheritance](images/inheritance.jpg "inheritance example")
- [**The super keyword**](OOP/Sub_class.java)
    - It is used to differentiate the members of superclass from the members of subclass, if they have same names.
    - It is used to invoke the superclass constructor from subclass. Constructors are not members, so they are not inherited by subclasses
- [**Invoking Superclass Constructor**](OOP/Subclass.java)
    - The subclass automatically acquires the default constructor of the superclass.
    - But you need to use the super keyword to call a parameterized constructor of the superclass.
    ```java
    super(values);
    ```
- **IS-A Relationship**
    - Subclass is a Superclass
    - the **implements** keyword is used with classes to inherit the properties of an interface. Interfaces can never be extended by a class.
    ```Java
    public interface Animal {}
    public class Mammal implements Animal {}
    public class Dog extends Mammal {}
    ```
    - Use the **instanceof** operator to check IS-A Relationship. [Sample](OOP/Dog.java).
- **HAS-A relationship**
    - This determines whether a certain class HAS-A certain thing. This relationship helps to reduce duplication of code as well as bugs.
    ```java
    //This shows that class Van HAS-A Speed
    public class Vehicle{}
    public class Speed{}
    public class Van extends Vehicle {
       private Speed sp;
    }
    ```
- Types of Inheritance
    - Java does not support multiple inheritance but can implement one or more interfaces. C++ support  multiple inheritance.
![Types of Inheritance](images/types_of_inheritance.png "Types of Inheritance")

### Overriding
- Overriding means to override the functionality of an existing method. It helps Subclass to override the method that is not marked final.
- super keyword is used to invoke the superclass' overridden method. [Sample code](OOP/TestDog.java).

### Polymorphism
- The most common use of polymorphism in OOP occurs when a parent class reference is used to refer to a child class object.
```java
public interface Vegetarian{}
public class Animal{}
public class Deer extends Animal implements Vegetarian{}
// All the reference variables d, a, v, o refer to the same Deer object in the heap
Deer d = new Deer();
Animal a = d;
Vegetarian v = d;
Object o = d;
```
- **virtual method invocation**
    - In compile time, the check is made on the reference type. However, in the runtime, JVM figures out the object type and would run the method that belongs to that particular object. [Sample code](OOP/TestDog.java)

### Abstraction
- Abstraction is a process of hiding the implementation details from the user, only the functionality will be provided to the user.
-  If inheriting an abstract class, Subclass must provide implementations to all the abstract methods. [Sample code](OOP/AbstractDemo)

### Encapsulation
- To achieve encapsulation in Java
    1. Declare the variables of a class as private.
    2. Provide public setter and getter methods to modify and view the variables values.
- Benefits
    1. The fields of a class can be made read-only or write-only.
    2. A class can have total control over what is stored in its fields
- [Sample code](OOP/RunEncap.java)

### Interfaces
- Along with abstract methods, an interface may also contain constants, default methods, static methods, and nested types. Method bodies exist only for default methods and static methods.
- Except abstract class, all the methods of the interface need to be defined in the class.
- An interface does not contain any constructors and it can only contain instance fields that are declared both static and final.
- An interface can extend multiple interfaces. [Sample Code](OOP/ExtendInterfaces.java)
- The **interface** keyword is used to declare an interface. [Sample code](OOP/MammalInt.java)
    ```java
    interface Animal {
        // Any number of final, static fields
        // Any number of abstract method declarations\
        public void eat();
        public void travel();
    }
    ```
- An interface with no methods in it is referred to as a tagging interface. Two purposes:
    - Creates a common parent
    - Adds a data type to a class
- [**Nested or Inner interfaces**](https://beginnersbook.com/2016/03/nested-or-inner-interfaces-in-java/)
    - An interface which is declared inside another interface or class is called nested interface. The main purpose of using them is to resolve the namespace by grouping related interfaces
    - Nested interfaces are static by default.
    - Nested interfaces declared inside class can take any access modifier, however nested interface declared inside interface is public implicitly.
    - [Example code](OOP/NestedInterfaceDemo.java)

### Exceptions
- **Checked Exceptions**: exceptions that are checked by the compiler at compilation-time, these are also called as compile time exceptions.
    - [Example](Exceptions/FilenotFound_Demo.java)
    ```java
        //Can't compile, FileNotFoundException exception.
        File file = new File("E://file.txt");
        FileReader fr = new FileReader(file);
    ```

- **Unchecked Exceptions**: occurs at the time of execution, also called as Runtime Exceptions, include programming bugs etcs.
    - Example:
    ```java
        //ArrayIndexOutOfBoundsExceptionexception at Runtime.
        int num[] = {1, 2, 3, 4};
        System.out.println(num[5]);
    ```

- **Errors**: These are not exceptions at all. Errors are generated to indicate errors generated by the runtime environment. Example: JVM is out of memory. Normally, programs cannot recover from errors.

- **Exception Hierarchy**
    - [Built-in Exceptions](https://www.tutorialspoint.com/java/java_builtin_exceptions.htm)
    <p align="center">
        <img src="images/exceptions1.jpg" alt="hierarchy of Exceptions">
    </p>

- **Catching Exceptions**
    - Code within a try/catch block is referred to as protected code
    - Exceptions caught by sequence, ExceptionTypes are better listed from specific to general.
    - A finally block of code always executes. It allows you to run any cleanup-type statements, no matter what happens in the protected code.
    - [Example](Exceptions/ExcepTest.java)
    ```java
        try {
        // Protected code
        } catch (ExceptionType1|ExceptionType2 e1) {
            // Catching Multiple Type of Exceptions, since java 7
            // Catch block
        } catch (ExceptionType3 e3) {
           // Catch block
        } catch (ExceptionType4 e4) {
           // Catch block
        }finally {
        // The finally block always executes.
        }
    ```

- **The Throws/Throw Keywords**
    - If a method does not handle a checked exception, the method must declare it using the throws keyword.
    - throws is used to postpone the handling of a checked exception
    - throw is used to invoke an exception explicitly.
    ```java
    // throws more than one exception
    import java.io.*;
    public class className {
       public void withdraw(double amount) throws RemoteException, InsufficientFundsException {
          // Method implementation
          throw new RemoteException();
       }
       // Remainder of class definition
    }
    ```
- [**The try-with-resources**](https://docs.oracle.com/javase/tutorial/essential/exceptions/tryResourceClose.html)
    - try-with-resources, also referred as automatic resource management, helps to automatically close the resources used within the try catch block.
    - [Example](Exceptions/ReadData_Demo.java) that not uses try-with. More complicated. Error prone.
    - [Example](Try_withDemo/ReadData_Demo.java) that uses try-with. More concise and easy to write.
    ```java
    try(FileReader fr = new FileReader("file path")) {
    // use the resource
    } catch () {
      // body of catch
    }
    ```
- **User-defined Exceptions**
    - All exceptions must be a child of Throwable.
    - If you want to write a checked exception, you need to extend the **Exception** class.
    - If you want to write a runtime exception, you need to extend the RuntimeException class.
    - [Examples](Exceptions/UserDefinedException)
    ```java
    class MyException extends Exception { }
    ```

### Collections Framework
- The collections framework was designed to meet several **goals**, such as
    - The framework had to be high-performance.
    - The framework had to allow different types of collections to work in a similar manner and with a high degree of interoperability.
    - The framework had to extend and/or adapt a collection easily.
- **The Collection Interfaces**
    - The Collection Interfaces are abstract data types that represent collections. They help to form a hierarchy.
    - [The Collection Interface](https://docs.oracle.com/javase/8/docs/api/java/util/Collection.html)
        - The Collection interface is the foundation of collections framework. It declares the core methods that all collections will have.
    - [List](https://docs.oracle.com/javase/8/docs/api/java/util/List.html) -- [Sample Code](Collection/ListDemo.java)
    - [Set](https://docs.oracle.com/javase/8/docs/api/java/util/Set.html)
        - A Set is a Collection that cannot contain duplicate elements. It models the mathematical set abstraction. [Sample code](Collection/SetDemo.java)
    - [SortedSet](https://docs.oracle.com/javase/8/docs/api/java/util/SortedSet.html)
        - The SortedSet interface extends Set and declares a set sorted in an ascending order. [Sample Code](Collection/SortedSetTest.java)
        ```java
        SortedSet set = new TreeSet();
        ```
    - [Map](https://docs.oracle.com/javase/8/docs/api/java/util/Map.html)
        - The Map interface maps unique keys to values. Map has not parent interface. Both key and value are objects. [Sample Code](Collection/MapDemo.java)
    - [Map.Entry](https://docs.oracle.com/javase/8/docs/api/java/util/Map.Entry.html)
        - **Map.Entry** interface is the Enclosing interface of **Map** interface. [Sample code](Collection/HashMapDemo.java)
    - [SortedMap](https://docs.oracle.com/javase/7/docs/api/java/util/SortedMap.html)
        - The SortedMap interface extends Map. It ensures that the entries are maintained in an ascending key order.
        - extends by **TreeMap** [Sample Code](Collection/TreeMapDemo.java)

- **The Collection Classes**
    - [AbstractCollection](https://docs.oracle.com/javase/7/docs/api/java/util/AbstractCollection.html#add(E))
        - This class provides a skeletal implementation of the Collection interface, to minimize the effort required to implement this interface.
    - [AbstractList](https://docs.oracle.com/javase/7/docs/api/java/util/AbstractList.html)
        - Extends AbstractCollection and implements most of the List interface.
    - [AbstractSequentialList](https://docs.oracle.com/javase/7/docs/api/java/util/AbstractSequentialList.html)
        - Extends AbstractList for use by a collection that uses sequential rather than random access of its elements.
    - [LinkedList](https://docs.oracle.com/javase/7/docs/api/java/util/LinkedList.html)
        - Implements a linked list by extending AbstractSequentialList.  [Sample code](Collection/LinkedListDemo.java)
    - [ArrayList](https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html)
        - Implements a dynamic array by extending AbstractList. [Sample Code](Collection/ArrayListDemo.java)
    - [AbstractSet](https://docs.oracle.com/javase/7/docs/api/java/util/AbstractSet.html)
        - Extends AbstractCollection and implements most of the Set interface.
    - [HashSet](https://docs.oracle.com/javase/7/docs/api/java/util/HashSet.html)
        - Extends AbstractSet for use with a hash table.
    - [LinkedHashSet](https://docs.oracle.com/javase/7/docs/api/java/util/LinkedHashSet.html)
        - Extends HashSet to allow insertion-order iterations.
        - LinkedHashSet maintains a linked list of the entries in the set, in the order in which they were inserted. [Sample Code](Collection/HashSetDemo.java)
    - [TreeSet](https://docs.oracle.com/javase/7/docs/api/java/util/TreeSet.html)
        - Implements a set stored in a tree. Extends AbstractSet.
        - This implementation provides guaranteed log(n) time cost for the basic operations (add, remove and contains). [Sample Code](Collection/TreeSetDemo.java)
    - [AbstractMap](https://docs.oracle.com/javase/7/docs/api/java/util/AbstractMap.html)
        - Implements most of the Map interface. Extended from Object.
    - [HashMap](https://docs.oracle.com/javase/7/docs/api/java/util/HashMap.html)
        - Extends AbstractMap to use a hash table. [Sample Code](Collection/HashMapDemo.java)
    - [TreeMap](https://docs.oracle.com/javase/7/docs/api/java/util/TreeMap.html)
        - A Red-Black tree based NavigableMap implementation. Extends AbstractMap. [Sample Code](Collection/TreeMapDemo.java)
    - [WeakHashMap](https://docs.oracle.com/javase/7/docs/api/java/util/WeakHashMap.html)
        - Extends from Map interface, stores only weak references to its keys. It allows a key-value pair to be garbage-collected when its key is no longer referenced outside of the WeakHashMap. [Sample code](Collection/WeakHashMap_Demo.java)
    - [LinkedHashMap](https://docs.oracle.com/javase/7/docs/api/java/util/LinkedHashMap.html)
        - Extends HashMap to allow insertion-order iterations. [Sample Code](Collection/LinkedHashMapDemo.java)
    - [IdentityHashMap](https://docs.oracle.com/javase/7/docs/api/java/util/IdentityHashMap.html)
        - Extends AbstractMap and uses reference equality when comparing documents.[Sample Code(Collection/IdentityHashMapDemo.java)
    - [Vector](https://docs.oracle.com/javase/8/docs/api/java/util/Vector.html)
        - Extends from AbstractList, implements Collection Interfaces. It is similar to ArrayList, but it is synchronized and has some different methods. [Sample code](Collection/VectorDemo.java)
    - [Stack](https://docs.oracle.com/javase/8/docs/api/java/util/Stack.html)
        - Stack is a subclass of Vector that implements a standard last-in, first-out stack. [Sample code](Collection/StackDemo.java)
    - [Dictionary](https://docs.oracle.com/javase/7/docs/api/java/util/Dictionary.html)
        - This class is obsolete. New implementations should implement the Map interface. **Not in Collection framework**
    - [Hashtable](https://docs.oracle.com/javase/8/docs/api/java/util/Hashtable.html)
        - extends from Dictionary but also implements Map interfaces. It is similar to HashMap, but is synchronized. [Sample code](Collection/HashTableDemo.java)
    - [Properties](https://docs.oracle.com/javase/7/docs/api/java/util/Properties.html)
        - Properties is a subclass of Hashtable. Both key and value are String.[Sample Code](Collection/PropDemo.java)
    - [BitSet](https://docs.oracle.com/javase/7/docs/api/java/util/BitSet.html)
        - Extend Object. Not in Collection framework
        - The BitSet class creates a special type of array that holds bit values. [Sample Code](Collection/BitSetDemo.java)
        - Support mathematical set operations likes OR, AND, XOR etc.

- [Collection Algorithms](https://www.tutorialspoint.com/java/java_collection_algorithms.htm)
    - [Official sources](https://docs.oracle.com/javase/8/docs/api/?java/util/Collections.html)
    -  These algorithms are defined as static methods within the Collections class. Not in AbstractCollection! Like List and Sets etc collections are defined under AbstractCollection. [Sample Code](Collection/AlgorithmsDemo.java)
    - Several of the methods can throw:
        - ClassCastException: occurs when an attempt is made to compare incompatible types
        - UnsupportedOperationException: occurs when an attempt is made to modify an unmodifiable collection.
- [Using Java Iterator](https://www.tutorialspoint.com/java/java_using_iterator.htm)
    - Iterator enables you to cycle through a collection, obtaining or removing elements. ListIterator extends Iterator to allow bidirectional traversal of a list, and the modification of elements. [Sample Code](https://www.tutorialspoint.com/java/java_collection_algorithms.htm)
- [Using Java Comparator](https://www.geeksforgeeks.org/comparator-interface-java/)
    - Comparator interface helps to define precisely what sorted order means. It has two methods:
        - The compare Method
            ```java
            /**
            0 : obj1 == obj2
            postive : obj1 > obj2
            negative: obj1 < obj2
            **/
            int compare(Object obj1, Object obj2)
            ```
        - The equals Method
        ```java
        /**
        true:  rue only if the specified object is also a comparator and it imposes the same ordering as this comparator
        */
        boolean equals(Object obj)
        ```
    - Normal use [Sample Code](Collection/ComparatorExample.java)
    - Sort collection by more than one field [Sample Code](Collection/Student.java)
        - Define inner static Comparator class is good to be used.
- [Comparable vs Comparator in Java](https://www.geeksforgeeks.org/comparable-vs-comparator-in-java/)
    - A comparable object is capable of comparing itself with another object. [Sample Code](Collection/ComparableExample.java)
        ```java
        Collections.sort(list);
        ```
    - Unlike Comparable, Comparator is external to the element type we are comparing. It’s a separate class. We create multiple separate classes (that implement Comparator) to compare by different members.
        ```java
        Collections.sort(al, new CustomerSortingComparator());
        ```
- The classes and interfaces of the collections framework are in package java.util.

### Generics
- Detail from https://www.geeksforgeeks.org/generics-in-java/
- Generics allow type (Integer, String, … etc and user defined types) to be a parameter to methods, classes and interfaces.
- Advantages:
    - Code Reuse.
    - Type Safety : Generics make errors to appear compile time than at run time
    - Individual Type Casting is not needed
    - Implementing generic algorithms
- **Generic Methods**
    - a single generic method declaration that can be called with arguments of different types. [Sample Code](Generic/GenericMethodTest.java)
- **Bounded Type Parameters**
    - helps to restrict the kinds of types that are allowed to be passed to a type parameter.
    - Following example illustrates how extends is used in a general sense to mean either "extends" (as in classes) or "implements" (as in interfaces). [Sample code](Generic/MaximumTest.java)
        - Notice, Comparable is an interface.
- **Generic Classes**
    - syntax
    ```java
        // To create an instance of generic class
        BaseType <Type> obj = new BaseType <Type>();
        //Note: In Parameter type we can not use primitives like
        //'int','char' or 'double'.
    ```
    - As with generic methods, the type parameter section of a generic class can have one or more type parameters separated by commas. [Sample Code](Generic/Box.java)

### Serialization
- [**Serialization and Deserialization**](https://www.geeksforgeeks.org/serialization-in-java/)
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
### Networking
- The term network programming refers to writing programs that execute across multiple devices (computers), in which the devices are all connected to each other using a network.
- The java.net package provides support for the two common network protocols
    - TCP
    - UDP
- **Socket Programming**
    - he following steps occur when establishing a TCP connection between two computers using sockets
        - The server instantiates a ServerSocket object, denoting which port number communication is to occur on.
        - The server invokes the accept() method of the ServerSocket class. This method waits until a client connects to the server on the given port.
        - After the server is waiting, a client instantiates a Socket object, specifying the server name and the port number to connect to.
        - The constructor of the Socket class attempts to connect the client to the specified server and the port number. If communication is established, the client now has a Socket object capable of communicating with the server.
        - On the server side, the accept() method returns a reference to a new socket on the server that is connected to the client's socket.
    - **java.net.ServerSocket** class is used by server applications to obtain a port and listen for client requests.
    - **java.net.ServerSocket** class represents the socket that both the client and the server use to communicate with each other.
    - **java.net.InetAddress class** represents an Internet Protocol (IP) address.
    - [Sample Codes](Networking)
- **URL Processing**
    - The **java.net.URL** class represents a URL and has a complete set of methods to manipulate URL in Java.
    - The openConnection() method returns a **java.net.URLConnection**, an abstract class whose subclasses represent the various types of URL connections.
    - [Sample code](Networking/URLDemo.java)

### Multithreading
- https://www.tutorialspoint.com/java/java_multithreading.htm
- By definition, multitasking is when multiple processes share common processing resources such as a CPU. Multi-threading extends the idea of multitasking into applications where you can subdivide specific operations within a single application into individual threads. The OS divides processing time not only among different applications, but also among each thread within an application.
- **Life Cycle of a Thread**
    - **New** − A new thread begins its life cycle in the new state. It remains in this state until the program starts the thread. It is also referred to as a born thread.
    - **Runnable** − After a newly born thread is started, the thread becomes runnable. A thread in this state is considered to be executing its task.
    - **Waiting** − Sometimes, a thread transitions to the waiting state while the thread waits for another thread to perform a task. A thread transitions back to the runnable state only when another thread signals the waiting thread to continue executing.
    - **Timed Waiting** − A runnable thread can enter the timed waiting state for a specified interval of time. A thread in this state transitions back to the runnable state when that time interval expires or when the event it is waiting for occurs.
    - **Terminated (Dead)** − A runnable thread enters the terminated state when it completes its task or otherwise terminates.
- **Thread Priorities**
    - Java thread priorities are in the range between MIN_PRIORITY (a constant of 1) and MAX_PRIORITY (a constant of 10). By default, every thread is given priority NORM_PRIORITY (a constant of 5).
- **Create a Thread by Implementing a [Runnable Interface](https://docs.oracle.com/javase/7/docs/api/java/lang/Runnable.html)**
    - In most cases, the Runnable interface should be used if you are only planning to override the run() method and no other Thread methods. This is important because classes should not be subclassed unless the programmer intends on modifying or enhancing the fundamental behavior of the class.
    - Step 1: implement a run() method provided by a Runnable interface. This method provides an entry point for the thread and you will put your complete business logic inside this method.
        ```java
        public void run( )
        ```
    - Step 2: you will instantiate a Thread object using the following constructor.
        ```java
        /**
        threadObj : an instance of a class that implements the Runnable interface
        threadName:  the name given to the new thread
        */
        Thread(Runnable threadObj, String threadName);
        ```
    - Step 3: you can start it by calling start() method, which executes a call to run() method
        ```java
        void start();
        ```
    - [Sample Code](Multithreading/TestThread)
- **Create a Thread by Extending a Thread Class**
    - [Thread Class](https://docs.oracle.com/javase/7/docs/api/java/lang/Thread.html) defined in java.lang.Thread. It also implement Runnable interface.
    - Step 1: override run() method available in Thread class
    - Step 2: Once Thread object is created, you can start it by calling start() method
    - [Sample code](Multithreading/TestThread2.java)
- **Thread Methods**
    - JVM does not wait for Daemon thread before exiting while it waits for user threads. [Sample Code](Multithreading/ThreadMethods)
    - Understand [join( )](https://www.geeksforgeeks.org/joining-threads-in-java/). [Sample Code](Multithreading/JoinExp.java)
- [**Daemon thread**](https://beginnersbook.com/2015/01/daemon-thread-in-java-with-example/)
    - Daemon thread is a low priority thread (in context of JVM) that runs in background to perform tasks such as garbage collection (gc) etc., they do not prevent the JVM from exiting (even if the daemon thread itself is running) when all the user threads (non-daemon threads) finish their execution. [Sample Code](Multithreading/DaemonThreadExample1.java)
- Major Java Multithreading Concepts
    - [Thread Synchronization](https://www.tutorialspoint.com/java/java_thread_synchronization.htm)
        - Java create threads and synchronize their task by using synchronized blocks. You keep shared resources within this block.
        ```java
        synchronized(objectidentifier) {
            //objectidentifier : a reference to an object whose lock associates with the monitor that the synchronized statement represents.
           // Access shared variables and other shared resources
        }
        ```
        - [Sample Codes](Multithreading/ThreadSynchronization)
        - From [GeeksforGeek](shttps://www.geeksforgeeks.org/synchronized-in-java/)
            - All synchronized blocks synchronized on the same object can only have one thread executing inside them at a time. All other threads attempting to enter the synchronized block are blocked until the thread inside the synchronized block exits the block. [Code](Multithreading/SyncDemo.java).
            - This synchronization is implemented in Java with a concept called monitors. I have learned this in OS course. See it [here](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_09__Process_Synchronization__II.pdf).
    - [Interthread Communication](https://www.tutorialspoint.com/java/java_thread_communication.htm)
        - Enable two or more threads exchange some information. [Sample Code](Multithreading/ThreadSynchronization/InterthreadCommunication.java)
    - [**Thread Deadlock**](https://www.tutorialspoint.com/java/java_thread_deadlock.htm)
        - Deadlock occurs when multiple threads need the same locks but obtain them in different order. [A Dead Lock](Multithreading/ThreadSynchronization/DeadLockExp.java)
        - Deadlock Solution See [1](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_10__Deadlocks__I.pdf), [2](https://github.com/XuShaoming/UB_COURSES/blob/master/Operating%20System/Lecture_11__Deadlocks__II.pdf).
            - [Sample Code](Multithreading/ThreadSynchronization/SolvDeadLockExp.java) solve deadlock by change order.
    - [**Thread Control**](https://www.tutorialspoint.com/java/java_thread_control.htm)
        - [Sample Code](Multithreading/ThreadSynchronization/ThreadControl.java)
- [**volatile keyword in Java**](https://www.geeksforgeeks.org/volatile-keyword-in-java/)
  - **Mutual Exclusion**: It means that only one thread or process can execute a block of code (critical section) at a time.
  - **Visibility**: It means that changes made by one thread to shared data are visible to other threads.
  - Volatile variables have the visibility features of synchronized but not the atomicity features. The values of volatile variable will never be cached and all writes and reads will be done to and from the main memory.

### Documentation Comments
- three types of comments:
    - /* text */
        - The compiler ignores everything from /* to */.
    - //text
        - The compiler ignores everything from // to the end of the line.
    - /** documentation */
        - This is a documentation comment. The JDK javadoc tool uses doc comments when preparing automatically generated documentation.
- Javadoc
    - Javadoc is a tool which comes with JDK and it is used for generating Java code documentation in HTML format from Java source code, which requires documentation in a predefined format.
    - [Sample Code](Basic/AddNum.java)
- [@Override](https://stackoverflow.com/questions/561365/what-is-override-for-in-java/561391) purpose.
