class FreshJuice {
   enum FreshJuiceSize{ SMALL, MEDIUM, LARGE }
   FreshJuiceSize size;
}

public class Basic_Enums_FreshJuiceTest {

   public static void main(String args[]) {
      FreshJuice juice = new FreshJuice();
      juice.size = FreshJuice.FreshJuiceSize.MEDIUM ;
      System.out.println("Size: " + juice.size);
   }
}

/**
Althugh the element not define the type specifically, here compliler makes it string as default.

xu-Macbook:Java xushaoming$ java Basic_Enums_FreshJuiceTest
Size: MEDIUM
*/