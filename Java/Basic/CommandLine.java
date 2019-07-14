public class CommandLine {

   public static void main(String args[]) {
      for(int i = 0; i<args.length; i++) {
         System.out.println("args[" + i + "]: " +  args[i]);
      }
   }
}

/**
xu-Macbook:Basic xushaoming$ java CommandLine hello i am here
args[0]: hello
args[1]: i
args[2]: am
*/
