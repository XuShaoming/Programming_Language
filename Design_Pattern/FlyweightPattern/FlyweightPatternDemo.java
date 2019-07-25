public class FlyweightPatternDemo {
   private static final String colors[] =
      { "Red", "Green", "Blue", "White", "Black" };
   public static void main(String[] args) {

      for(int i=0; i < 20; ++i) {
         Circle circle =
            (Circle)ShapeFactory.getCircle(getRandomColor());
         circle.setX(getRandomX());
         circle.setY(getRandomY());
         circle.setRadius(100);
         circle.draw();
      }
   }
   private static String getRandomColor() {
      return colors[(int)(Math.random()*colors.length)];
   }
   private static int getRandomX() {
      return (int)(Math.random()*100 );
   }
   private static int getRandomY() {
      return (int)(Math.random()*100);
   }
}

/*
xu-Macbook:FlyweightPattern xushaoming$ java FlyweightPatternDemo
Creating circle of color : Red
Circle: Draw() [Color : Red, x : 17, y :30, radius :100
Creating circle of color : Black
Circle: Draw() [Color : Black, x : 24, y :11, radius :100
Creating circle of color : White
Circle: Draw() [Color : White, x : 54, y :59, radius :100
Creating circle of color : Blue
Circle: Draw() [Color : Blue, x : 62, y :53, radius :100
Circle: Draw() [Color : White, x : 19, y :70, radius :100
Circle: Draw() [Color : Blue, x : 98, y :54, radius :100
Creating circle of color : Green
Circle: Draw() [Color : Green, x : 10, y :38, radius :100
Circle: Draw() [Color : Blue, x : 98, y :61, radius :100
Circle: Draw() [Color : Blue, x : 32, y :77, radius :100
Circle: Draw() [Color : Blue, x : 47, y :41, radius :100
Circle: Draw() [Color : Red, x : 34, y :15, radius :100
Circle: Draw() [Color : Red, x : 7, y :10, radius :100
Circle: Draw() [Color : Blue, x : 30, y :32, radius :100
Circle: Draw() [Color : Blue, x : 59, y :26, radius :100
Circle: Draw() [Color : Blue, x : 0, y :18, radius :100
Circle: Draw() [Color : Blue, x : 9, y :42, radius :100
Circle: Draw() [Color : White, x : 19, y :74, radius :100
Circle: Draw() [Color : White, x : 5, y :84, radius :100
Circle: Draw() [Color : White, x : 60, y :46, radius :100
Circle: Draw() [Color : Blue, x : 22, y :65, radius :100
*/
