package Programming_Language.Java.AccessControl.Package;
/* File name : MammalInt.java */

public class MammalInt implements Animal {

   public void eat() {
      System.out.println("Mammal eats");
   }

   public void travel() {
      System.out.println("Mammal travels");
   }

   public int noOfLegs() {
      return 0;
   }

   public static void main(String args[]) {
      MammalInt m = new MammalInt();
      m.eat();
      m.travel();
   }
}

/**
xu-Macbook:codes xushaoming$ javac -d /Users/xushaoming/Desktop/github.nosync/ Animal.java
xu-Macbook:codes xushaoming$ javac -d /Users/xushaoming/Desktop/github.nosync/ MammalInt.java
xu-Macbook:codes xushaoming$ java Programming_Language.Java.AccessControl.Package.MammalInt
Mammal eats
Mammal travels
*/
