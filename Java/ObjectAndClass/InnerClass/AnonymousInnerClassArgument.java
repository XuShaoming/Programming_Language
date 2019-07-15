// interface
interface Message {
   String greet();
}

public class AnonymousInnerClassArgument {
   // method which accepts the object of interface Message
   public void displayMessage(Message m) {
      System.out.println(m.greet() +
         ", This is an example of anonymous inner class as an argument");
   }

   public static void main(String args[]) {
      // Instantiating the class
      AnonymousInnerClassArgument obj = new AnonymousInnerClassArgument();

      // Passing an anonymous inner class as an argument
      obj.displayMessage(new Message() {
         public String greet() {
            return "Hello";
         }
      });
   }
}

/**
xu-Macbook:InnerClass xushaoming$ java AnonymousInnerClassArgument
Hello, This is an example of anonymous inner class as an argument
*/
