interface A {
   public void methodA1(String name);
}

interface B {
   public void methodB1(String name);
}

public interface ExtendInterfaces extends A, B {
    public void methodC1(String name);
}
