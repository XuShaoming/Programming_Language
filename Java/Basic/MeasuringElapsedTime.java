import java.util.*;
public class MeasuringElapsedTime {

   public static void main(String args[]) {
      try {
         long start = System.currentTimeMillis( );
         System.out.println(new Date( ) + "\n");

         Thread.sleep(5*60*10);
         System.out.println(new Date( ) + "\n");

         long end = System.currentTimeMillis( );
         long diff = end - start;
         System.out.println("Difference is : " + diff);
      } catch (Exception e) {
         System.out.println("Got an exception!");
      }
   }
}

/**
xu-Macbook:Basic xushaoming$ java MeasuringElapsedTime
Sun Jul 14 14:04:03 EDT 2019

Sun Jul 14 14:04:06 EDT 2019

Difference is : 3068
*/
