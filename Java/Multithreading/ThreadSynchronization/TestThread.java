class PrintDemo {
   public void printCount() {
      try {
         for(int i = 5; i > 0; i--) {
            System.out.println("Counter   ---   "  + i );
         }
      } catch (Exception e) {
         System.out.println("Thread  interrupted.");
      }
   }
}

class ThreadDemo extends Thread {
   private Thread t;
   private String threadName;
   PrintDemo  PD;

   ThreadDemo( String name,  PrintDemo pd) {
      threadName = name;
      PD = pd;
   }

   public void run() {
      PD.printCount();
      System.out.println("Thread " +  threadName + " exiting.");
   }

   public void start () {
      System.out.println("Starting " +  threadName );
      if (t == null) {
         t = new Thread (this, threadName);
         t.start ();
      }
   }
}

public class TestThread {
   public static void main(String args[]) {

      PrintDemo PD = new PrintDemo();

      ThreadDemo T1 = new ThreadDemo( "Thread - 1 ", PD );
      ThreadDemo T2 = new ThreadDemo( "Thread - 2 ", PD );

      T1.start();
      T2.start();

      // wait for threads to end
         try {
         T1.join();
         T2.join();
      } catch ( Exception e) {
         System.out.println("Interrupted");
      }
   }
}

/**
xu-Macbook:ThreadSynchronization xushaoming$ rm *.class
xu-Macbook:ThreadSynchronization xushaoming$ javac TestThread.java
xu-Macbook:ThreadSynchronization xushaoming$ java TestThread
Starting Thread - 1
Starting Thread - 2
Counter   ---   5
Counter   ---   5
Counter   ---   4
Counter   ---   4
Counter   ---   3
Counter   ---   3
Counter   ---   2
Counter   ---   1
Counter   ---   2
Counter   ---   1
Thread Thread - 2  exiting.
Thread Thread - 1  exiting.
*/
