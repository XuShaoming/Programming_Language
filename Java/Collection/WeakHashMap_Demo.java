//https://www.tutorialspoint.com/java/java_weakhashmap_class.htm

import java.util.*;
public class WeakHashMap_Demo {

   private static Map map;
   public static void main (String args[]) {
      map = new WeakHashMap();
      map.put(new String("Maine"), "Augusta");

      Runnable runner = new Runnable() {
         public void run() {
            while (map.containsKey("Maine")) {
               try {
                  Thread.sleep(500);
               } catch (InterruptedException ignored) {
               }
               System.out.println("Thread waiting");
               //System.gc();
            }
         }
      };
      Thread t = new Thread(runner);
      t.start();
      System.out.println("Main waiting");
      try {
         t.join();
      } catch (InterruptedException ignored) {
      }
   }
}

/**
xu-Macbook:Collection xushaoming$ java WeakHashMap_Demo
Main waiting
Thread waiting
*/

/**
Comment out System.gc()

xu-Macbook:Collection xushaoming$ java WeakHashMap_Demo
Main waiting
Thread waiting
Thread waiting
Thread waiting
Thread waiting
Thread waiting
Thread waiting
Thread waiting
Thread waiting
*/
