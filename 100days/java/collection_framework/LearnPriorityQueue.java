import java.util.*;
public class LearnPriorityQueue {
    public static void main(String args[]){
    PriorityQueue<Integer> storage=new PriorityQueue<>();
    storage.offer(40);
    storage.offer(12);
    storage.offer(24);
    storage.offer(36);
    System.out.println(storage);
    storage.poll();
    System.out.println(storage);
    System.out.println(storage.peek());
}

}
