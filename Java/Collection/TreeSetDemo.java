//https://www.tutorialspoint.com/java/java_treeset_class.htm

import java.util.*;
public class TreeSetDemo {

   public static void main(String args[]) {
      // Create a tree set
      TreeSet ts = new TreeSet();

      // Add elements to the tree set
      ts.add("C");
      ts.add("A");
      ts.add("B");
      ts.add("E");
      ts.add("F");
      ts.add("D");
      System.out.println(ts);
   }
}

/**
xu-Macbook:Collection xushaoming$ java TreeSetDemo
[A, B, C, D, E, F]
*/
