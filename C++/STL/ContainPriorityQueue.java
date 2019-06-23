import java.util.*; 
  
class ContainPriorityQueue 
{ 

    public static void showQueue(PriorityQueue<Integer> pQueue) {
        while(!pQueue.isEmpty()) {
            System.out.println(pQueue.peek());
            pQueue.poll();
        }
    }
    public static void main(String args[]) 
    { 
        // Creating empty priority queue 
        PriorityQueue<Integer> pQueue = 
                          new PriorityQueue<Integer>(); 

        pQueue.offer(10);
        pQueue.offer(30);
        pQueue.offer(20);
        pQueue.offer(5);
        pQueue.offer(1);
        showQueue(pQueue);

        System.out.println("PQueue size " + pQueue.size());

        System.out.println("PQueue top " + pQueue.peek());
    } 
}

/**
1
5
10
20
30
PQueue size 0
PQueue top null
*/