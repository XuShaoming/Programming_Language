// easiest implementation
class Singleton {

   private static Singleton singleton = new Singleton( );

   /* A private Constructor prevents any other
    * class from instantiating.
    */
   private Singleton() { }

   /* Static 'instance' method */
   public static Singleton getInstance( ) {
      return singleton;
   }

   /* Other methods protected by singleton-ness */
   protected static void demoMethod( ) {
      System.out.println("demoMethod for singleton");
   }
}

// classic Singleton design pattern
class ClassicSingleton {

   private static ClassicSingleton instance = null;
   private ClassicSingleton() {
      // Exists only to defeat instantiation.
   }

   public static ClassicSingleton getInstance() {
      if(instance == null) {
         instance = new ClassicSingleton();
      }
      return instance;
   }
   protected static void demoMethod( ) {
      System.out.println("demoMethod for ClassicSingleton");
   }
}

// File Name: SingletonDemo.java
public class SingletonDemo {

   public static void main(String[] args) {
      Singleton tmp = Singleton.getInstance();
      tmp.demoMethod();
      ClassicSingleton tmp2 = ClassicSingleton.getInstance();
      tmp2.demoMethod();

   }
}

/**

xu-Macbook:ObjectAndClass xushaoming$ java SingletonDemo
demoMethod for singleton
demoMethod for ClassicSingleton
*/
