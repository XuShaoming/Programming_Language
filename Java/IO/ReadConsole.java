import java.io.*;
public class ReadConsole {

   public static void main(String args[]) throws IOException {
      InputStreamReader cin = null;

      try {
         cin = new InputStreamReader(System.in);
         System.out.println("Enter characters, 'q' to quit.");
         char c;
         do {
            c = (char) cin.read();
            System.out.print(c);
         } while(c != 'q');
      }finally {
         if (cin != null) {
            cin.close();
         }
      }
   }
}

/**
xu-Macbook:IO xushaoming$ java ReadConsole
Enter characters, 'q' to quit.
1
1
2
2
3
3
f
f
q
qxu-Macbook:IO xushaoming$ 
*/
