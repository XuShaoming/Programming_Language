public class VisitorPatternDemo {
   public static void main(String[] args) {

      ComputerPart computer = new Computer();
      computer.accept(new ComputerPartDisplayVisitor());
   }
}

/*
xu-Macbook:VisitorPattern xushaoming$ java VisitorPatternDemo
Displaying Mouse.
Displaying Keyboard.
Displaying Monitor.
Displaying Computer.
*/
