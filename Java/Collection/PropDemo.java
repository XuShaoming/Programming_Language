import java.util.*;
public class PropDemo {

   public static void main(String args[]) {
      Properties capitals = new Properties();
      Set states;
      String str;

      capitals.put("Illinois", "Springfield");
      capitals.put("Missouri", "Jefferson City");
      capitals.put("Washington", "Olympia");
      capitals.put("California", "Sacramento");
      capitals.put("Indiana", "Indianapolis");

      // Show all states and capitals in hashtable.
      states = capitals.keySet();   // get set-view of keys
      Iterator itr = states.iterator();

      while(itr.hasNext()) {
         str = (String) itr.next();
         System.out.println("The capital of " + str + " is " +
            capitals.getProperty(str) + ".");
      }
      System.out.println();

      // look for state not in list -- specify default
      str = capitals.getProperty("Florida", "Not Found");
      System.out.println("The capital of Florida is " + str + ".");
   }
}

/**
xu-Macbook:Collection xushaoming$ java PropDemo
The capital of Indiana is Indianapolis.
The capital of Illinois is Springfield.
The capital of Missouri is Jefferson City.
The capital of California is Sacramento.
The capital of Washington is Olympia.

The capital of Florida is Not Found.
*/
