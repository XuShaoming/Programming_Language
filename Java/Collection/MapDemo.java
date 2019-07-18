import java.util.*;
public class MapDemo {

   public static void main(String[] args) {
      Map m1 = new HashMap();
      /**  Error unexpected type
      Map<int, char> m2 = new HashMap<>();
      */
      Map<Integer, Character> m2 = new HashMap<>();
      m1.put("Zara", "8");
      m1.put("Mahnaz", "31");
      m1.put("Ayan", "12");
      m1.put("Daisy", "14");

      m2.put(1, 'a');


      System.out.println(" Map Elements");
      System.out.print("\t" + m1);
      System.out.println();

   }
}
