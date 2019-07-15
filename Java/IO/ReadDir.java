import java.io.File;
public class ReadDir {

   public static void main(String[] args) {
      File file = null;
      String[] paths;

      try {
         // create new file object
         file = new File("/tmp");

         // array of files and directory
         paths = file.list();

         // for each name in the path array
         for(String path:paths) {
            // prints filename and directory name
            System.out.println(path);
         }
      } catch (Exception e) {
         // if any error occurs
         e.printStackTrace();
      }
   }
}

/**
xu-Macbook:IO xushaoming$ java ReadDir
at-348mIp
lilo.38306
powerlog
ev-RABte7
com.adobe.reader.rna.95a2.1f5
com.apple.launchd.ge8Fhjjh2j
.vbox-xushaoming-ipc
com.adobe.reader.rna.2c3.1f5
boost_interprocess
com.adobe.acrobat.rna.RdrCefBrowserLock.DC
com.adobe.reader.rna.c63.1f5
com.adobe.reader.rna.0.1f5.DC
ev-N4HjHb
com.apple.launchd.7dIzqhblGU
*/
