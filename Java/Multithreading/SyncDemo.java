// https://www.geeksforgeeks.org/synchronized-in-java/

// A Java program to demonstrate working of 
// synchronized. 

/*
import java.io.*; 
import java.util.*; 
  
// A Class used to send a message 
class Sender 
{ 
    public void send(String msg) 
    { 
        System.out.println("Sending\t"  + msg ); 
        try
        { 
            Thread.sleep(1000); 
        } 
        catch (Exception e) 
        { 
            System.out.println("Thread  interrupted."); 
        } 
        System.out.println("\n" + msg + "Sent"); 
    } 
} 
  
// Class for send a message using Threads 
class ThreadedSend extends Thread 
{ 
    private String msg; 
    private Thread t; 
    Sender  sender; 
  
    // Recieves a message object and a string 
    // message to be sent 
    ThreadedSend(String m,  Sender obj) 
    { 
        msg = m; 
        sender = obj; 
    } 
  
    public void run() 
    { 
        // Only one thread can send a message 
        // at a time. 
        synchronized(sender) 
        { 
            // synchronizing the snd object 
            sender.send(msg); 
        } 
    } 
} 
  
// Driver class 
class SyncDemo 
{ 
    public static void main(String args[]) 
    { 
        Sender snd = new Sender(); 
        ThreadedSend S1 = 
            new ThreadedSend( " Hi " , snd ); 
        ThreadedSend S2 = 
            new ThreadedSend( " Bye " , snd ); 
  
        // Start two threads of ThreadedSend type 
        S1.start(); 
        S2.start(); 
  
        // wait for threads to end 
        try
        { 
            S1.join(); 
            S2.join(); 
        } 
        catch(Exception e) 
        { 
            System.out.println("Interrupted"); 
        } 
    } 
}

*/

/**
synchronize the Sender object inside the run() method of the ThreadedSend class

Result: 
xu-Macbook:Multithreading xushaoming$ java SyncDemo
Sending  Hi 

 Hi Sent
Sending  Bye 

 Bye Sent
*/



/*****
import java.io.*; 
import java.util.*; 
  
// A Class used to send a message 
class Sender 
{ 
    public synchronized void send(String msg) 
    { 
        System.out.println("Sending\t"  + msg ); 
        try
        { 
            Thread.sleep(1000); 
        } 
        catch (Exception e) 
        { 
            System.out.println("Thread  interrupted."); 
        } 
        System.out.println("\n" + msg + "Sent"); 
    } 
} 
  
// Class for send a message using Threads 
class ThreadedSend extends Thread 
{ 
    private String msg; 
    private Thread t; 
    Sender  sender; 
  
    // Recieves a message object and a string 
    // message to be sent 
    ThreadedSend(String m,  Sender obj) 
    { 
        msg = m; 
        sender = obj; 
    } 
  
    public void run() 
    { 
        // Only one thread can send a message 
        // at a time. 
        sender.send(msg); 
    } 
} 
  
// Driver class 
class SyncDemo 
{ 
    public static void main(String args[]) 
    { 
        Sender snd = new Sender(); 
        ThreadedSend S1 = 
            new ThreadedSend( " Hi " , snd ); 
        ThreadedSend S2 = 
            new ThreadedSend( " Bye " , snd ); 
  
        // Start two threads of ThreadedSend type 
        S1.start(); 
        S2.start(); 
  
        // wait for threads to end 
        try
        { 
            S1.join(); 
            S2.join(); 
        } 
        catch(Exception e) 
        { 
            System.out.println("Interrupted"); 
        } 
    } 
}
***/
/**
we could define the whole send() block as synchronized and it would produce the same result. Then we don’t have to synchronize 
he Message object inside the run() method in ThreadedSend class.

xu-Macbook:Multithreading xushaoming$ java SyncDemo
Sending  Hi 

 Hi Sent
Sending  Bye 

 Bye Sent
*/

import java.io.*; 
import java.util.*; 
  
// A Class used to send a message 
class Sender 
{ 
    public void send(String msg) 
    { 
        synchronized(this) {
            System.out.println("Sending\t"  + msg ); 
            try
            { 
                Thread.sleep(1000); 
            } 
            catch (Exception e) 
            { 
                System.out.println("Thread  interrupted."); 
            } 
            System.out.println("\n" + msg + "Sent"); 
        }
    } 
} 
  
// Class for send a message using Threads 
class ThreadedSend extends Thread 
{ 
    private String msg; 
    private Thread t; 
    Sender  sender; 
  
    // Recieves a message object and a string 
    // message to be sent 
    ThreadedSend(String m,  Sender obj) 
    { 
        msg = m; 
        sender = obj; 
    } 
  
    public void run() 
    { 
        // Only one thread can send a message 
        // at a time. 
        sender.send(msg); 
    } 
} 
  
// Driver class 
class SyncDemo 
{ 
    public static void main(String args[]) 
    { 
        Sender snd = new Sender(); 
        ThreadedSend S1 = 
            new ThreadedSend( " Hi " , snd ); 
        ThreadedSend S2 = 
            new ThreadedSend( " Bye " , snd ); 
  
        // Start two threads of ThreadedSend type 
        S1.start(); 
        S2.start(); 
  
        // wait for threads to end 
        try
        { 
            S1.join(); 
            S2.join(); 
        } 
        catch(Exception e) 
        { 
            System.out.println("Interrupted"); 
        } 
    } 
}

/**
synchronized blocks inside methods

xu-Macbook:Multithreading xushaoming$ java SyncDemo
Sending  Hi 

 Hi Sent
Sending  Bye 

 Bye Sent
*/



