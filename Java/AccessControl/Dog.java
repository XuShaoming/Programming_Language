import java.io.*;

class Animal {
  public void bark(){
  }
}

public class Dog extends Animal {

  //Error when setting it as priavte.
  public void bark(){
    System.out.println("Wang wang!\n");
  }

  public static void main(String args[]){
    Dog dog = new Dog();
    dog.bark();
  }
}

/**
xu-Macbook:ObjectAndClass xushaoming$ java Dog
Wang wang!
*/
