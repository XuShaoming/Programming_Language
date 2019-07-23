import Programming_Language.Design_Pattern.Shapes.*;

public class AbstractFactoryPatternDemo {
   public static void main(String[] args) {
      //get rounded shape factory
      AbstractFactory shapeFactory = FactoryProducer.getFactory(false);
      //get an object of Shape Rectangle
      Shape shape1 = shapeFactory.getShape("RECTANGLE");
      //call draw method of Shape Rectangle
      shape1.draw();
      //get an object of Shape Square
      Shape shape2 = shapeFactory.getShape("SQUARE");
      //call draw method of Shape Square
      shape2.draw();
      //get rounded shape factory
      AbstractFactory shapeFactory1 = FactoryProducer.getFactory(true);
      //get an object of Shape RoundedRectangle
      Shape shape3 = shapeFactory1.getShape("RECTANGLE");
      //call draw method of RoundedRectangle
      shape3.draw();
      //get an object of RoundedSquare
      Shape shape4 = shapeFactory1.getShape("SQUARE");
      //call draw method of RoundedSquare
      shape4.draw();

   }
}

/*
xu-Macbook:AbstractFactoryPattern xushaoming$ java AbstractFactoryPatternDemo
Inside Rectangle::draw() method.
Inside Square::draw() method.
Inside RoundedRectangle::draw() method.
Inside RoundedSquare::draw() method.
*/
