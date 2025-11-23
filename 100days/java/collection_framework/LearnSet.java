import java.util.*;
public class LearnSet {
    public static void main(String args[]){
        Set<Integer> container=new HashSet<>(); //allows unique value but not stored in order
        Set<Integer> container2=new LinkedHashSet<>();//allows only the unique value and stores in the way how it is entered
        Set<Integer> container3=new TreeSet<>(Collections.reverseOrder());//allows only the unique vakllue and also elemenst are stored in the sorted manner
        System.out.println("hash set");
        container.add(5);
        container.add(52);
        container.add(56);
        container.add(58);
        container.add(59);
        System.out.println(container);
        System.out.println("linked hashset");
        //linked hash set
        container2.add(100);
        container2.add(200);
        container2.add(300);
        container2.add(400);
        container2.add(500);
        System.out.println(container2);

        System.out.println("tree hash set");
        container3.add(888);
        container3.add(777);
        container3.add(666);
        container3.add(555);
        System.out.println(container3);


    }
    
}
