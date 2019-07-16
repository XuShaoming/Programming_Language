class Animal {
   public void move() {
      System.out.println("Animals can move");
   }
}

class Dog extends Animal {
   public void move() {
      super.move();
      System.out.println("Dogs can walk and run");
   }
   public void bark() {
      System.out.println("Dogs can bark");
   }
}

public class TestDog {

   public static void main(String args[]) {
      Animal a = new Animal();   // Animal reference and object
      Animal b = new Dog();   // Animal reference but Dog object

      a.move();   // runs the method in Animal class
      System.out.println();
      b.move();   // runs the method in Dog class

      //compile time error.
      //b.bark();
   }
}

/**
xu-Macbook:Inheritance_Polymorphism xushaoming$ java TestDog
Animals can move

Animals can move
Dogs can walk and run
*/
