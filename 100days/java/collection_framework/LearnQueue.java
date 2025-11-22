import java.util.*;
public class LearnQueue {

    public static void main(String args[]){
        Queue<String> names=new LinkedList<>();
        //methods are: offer ,poll, peek,element,add ,remove;
        names.offer("vishal");
        names.offer("ashton");
        names.offer("panav");
        System.out.println(names);
        System.out.println(names.poll());
        System.out.println(names.poll());
        System.out.println(names.poll());
        System.out.println(names);
        System.out.println(names.peek());

    }
    
}
