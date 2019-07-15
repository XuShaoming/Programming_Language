public class Unchecked_Demo {

   public static void main(String args[]) {
      int num[] = {1, 2, 3, 4};
      System.out.println(num[5]);
   }
}

/**
xu-Macbook:Exceptions xushaoming$ java Unchecked_Demo
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 5 out of bounds for length 4
	at Unchecked_Demo.main(Unchecked_Demo.java:5)
*/
