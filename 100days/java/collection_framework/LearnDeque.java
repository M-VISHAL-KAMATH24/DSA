import java.util.*;
public class LearnDeque {
//offerFirst,offerLast,peekFirst,peekLast,pollFirst,pollLast
    public static void main(String args[]){
        ArrayDeque<String> employees=new ArrayDeque<>();
        employees.offer("ram");
        employees.offer("sam");
        employees.offer("pam");
        employees.offer("mam");
        employees.offerFirst("cam");
        System.out.println(employees);
        System.out.println(employees.peek());

    }
    
}
