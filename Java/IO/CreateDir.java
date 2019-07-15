/**
Create directories in current directory.
*/

import java.io.File;
public class CreateDir {

   public static void main(String args[]) {
      String dirname = "temp1/temp2";
      File d = new File(dirname);

      // Create directory now.
      d.mkdirs();
   }
}
