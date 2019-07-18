/**
https://www.tutorialspoint.com/java/java_list_interface.htm
*/
import java.util.*;
public class ListDemo {

   public static void main(String[] args) {
      // Warning : missing type arguments for generic class List<E>
      List<String> a1 = new ArrayList<>();
      a1.add("Zara");
      a1.add("Mahnaz");
      a1.add("Ayan");
      System.out.println(" ArrayList Elements");
      System.out.print("\t" + a1);
      System.out.println();

      List<String> l1 = new LinkedList<>();
      l1.add("Zara");
      l1.add("Mahnaz");
      l1.add("Ayan");
      System.out.println(" LinkedList Elements");
      System.out.print("\t" + l1);
      System.out.println();
   }
}

/**
xu-Macbook:Collection xushaoming$ java ListDemo
 ArrayList Elements
	[Zara, Mahnaz, Ayan]
 LinkedList Elements
	[Zara, Mahnaz, Ayan]
*/
