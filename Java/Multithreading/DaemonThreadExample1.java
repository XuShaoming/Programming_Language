
public class DaemonThreadExample1 extends Thread{

   public void run(){

	  // Checking whether the thread is Daemon or not
	  if(Thread.currentThread().isDaemon()){
	      System.out.println("Daemon thread executing");
	  }
	  else{
	      System.out.println("user(normal) thread executing");
          }
   }
   public static void main(String[] args){
	 /* Creating two threads: by default they are
	  * user threads (non-daemon threads)
	  */
	 DaemonThreadExample1 t1=new DaemonThreadExample1();
	 DaemonThreadExample1 t2=new DaemonThreadExample1();

	 //Making user thread t1 to Daemon
        t1.setDaemon(true);

        //starting both the threads
        t1.start();
        t2.start();
   }
}


/**
xu-Macbook:Multithreading xushaoming$ java DaemonThreadExample1
Daemon thread executing
user(normal) thread executing
*/



/**
Example 2
*/
// public class DaemonThreadExample1 extends Thread {
//
//    public void run(){
// 	  System.out.println("Thread is running");
//    }
//
//     public static void main(String[] args){
// 	 DaemonThreadExample1 t1=new DaemonThreadExample1();
//          t1.start();
// 	 // It will throw IllegalThreadStateException
// 	 t1.setDaemon(true);
//     }
// }

/**
xu-Macbook:Multithreading xushaoming$ java DaemonThreadExample1
Exception in thread "main" Thread is running
java.lang.IllegalThreadStateException
	at java.base/java.lang.Thread.setDaemon(Thread.java:1410)
	at DaemonThreadExample1.main(DaemonThreadExample1.java:47)
*/
