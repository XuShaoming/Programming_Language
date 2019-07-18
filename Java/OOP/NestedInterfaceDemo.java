
/**
//Example 1: Nested interface declared inside another interface
interface MyInterfaceA{
    void display();
    interface MyInterfaceB{
        void myMethod();
    }
}

public class NestedInterfaceDemo
    implements MyInterfaceA.MyInterfaceB{
     public void myMethod(){
         System.out.println("Nested interface method");
     }

     public static void main(String args[]){
         MyInterfaceA.MyInterfaceB obj=
                 new NestedInterfaceDemo();
      obj.myMethod();
     }
}
*/
/**
xu-Macbook:OOP xushaoming$ java NestedInterfaceDemo
Nested interface method
*/


class MyClass{
    interface MyInterfaceB{
        void myMethod();
    }
}

public class NestedInterfaceDemo implements MyClass.MyInterfaceB{
     public void myMethod(){
         System.out.println("Nested interface method");
     }

     public static void main(String args[]){
        MyClass.MyInterfaceB obj=
               new NestedInterfaceDemo();
        obj.myMethod();
     }
}

/**
xu-Macbook:OOP xushaoming$ java NestedInterfaceDemo
Nested interface method
*/
