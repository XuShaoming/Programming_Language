// https://www.tutorialspoint.com/java/java_linkedhashset_class.htm

import java.util.*;
public class HashSetDemo {

   public static void main(String args[]) {
      // create a hash set
      LinkedHashSet hs = new LinkedHashSet();

      // add elements to the hash set
      hs.add("B");
      hs.add("A");
      hs.add("D");
      hs.add("E");
      hs.add("C");
      hs.add("F");
      System.out.println(hs);
   }
}

/**
xu-Macbook:Collection xushaoming$ java HashSetDemo
[B, A, D, E, C, F]
*/
