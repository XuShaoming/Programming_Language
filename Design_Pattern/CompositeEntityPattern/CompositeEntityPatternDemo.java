public class CompositeEntityPatternDemo {
   public static void main(String[] args) {
       Client client = new Client();
       client.setData("Test", "Data");
       client.printData();
       client.setData("Second Test", "Data1");
       client.printData();
   }
}

/*
xu-Macbook:CompositeEntityPattern xushaoming$ java CompositeEntityPatternDemo
Data: Test
Data: Data
Data: Second Test
Data: Data1
*/
