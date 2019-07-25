public class IteratorPatternDemo {

   public static void main(String[] args) {
      NameRepository namesRepository = new NameRepository();

      for(Iterator iter = namesRepository.getIterator(); iter.hasNext();){
         String name = (String)iter.next();
         System.out.println("Name : " + name);
      }
   }
}

/*
xu-Macbook:InterpreterPattern xushaoming$ java IteratorPatternDemo
Name : Robert
Name : John
Name : Julie
Name : Lora
*/
