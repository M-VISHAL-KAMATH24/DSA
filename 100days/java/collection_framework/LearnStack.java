import java.util.*;
public class LearnStack {
    public static void main(String args[]){
        Stack<String> animal=new Stack<>();
        animal.push("dog");
        animal.push("cat");
        animal.push("cow");
        animal.push("ox");
        System.out.println(animal);
        System.out.println(animal.peek());
        animal.pop();
        System.out.println(animal.peek());
    }
    
}
