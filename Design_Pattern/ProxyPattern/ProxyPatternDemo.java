public class ProxyPatternDemo {

   public static void main(String[] args) {
      Image image = new ProxyImage("test_10mb.jpg");

      //image will be loaded from disk
      image.display();
      System.out.println("");
      //image will not be loaded from disk
      image.display();
   }
}

/*
xu-Macbook:ProxyPattern xushaoming$ java ProxyPatternDemo
Loading test_10mb.jpg
Displaying test_10mb.jpg

Displaying test_10mb.jpg
*/
