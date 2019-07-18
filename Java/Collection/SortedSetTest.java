/**
https://www.tutorialspoint.com/java/java_sortedset_interface.htm
*/

import java.util.*;
public class SortedSetTest {

   public static void main(String[] args) {
      // Create the sorted set
      SortedSet set = new TreeSet();

      // Add elements to the set
      set.add("b");
      set.add("c");
      set.add("a");
      set.add("c");

      // Iterating over the elements in the set
      Iterator it = set.iterator();

      while (it.hasNext()) {
         // Get element
         Object element = it.next();
         System.out.println(element.toString());
      }
   }
}

/**
xu-Macbook:Collection xushaoming$ java SortedSetTest
a
b
c
*/
