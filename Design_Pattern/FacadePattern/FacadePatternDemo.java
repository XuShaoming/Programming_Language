public class FacadePatternDemo {
   public static void main(String[] args) {
      ShapeMaker shapeMaker = new ShapeMaker();

      shapeMaker.drawCircle();
      shapeMaker.drawRectangle();
      shapeMaker.drawSquare();
   }
}

/*
xu-Macbook:FacadePattern xushaoming$ java FacadePatternDemo
Circle::draw()
Rectangle::draw()
Square::draw()
*/
