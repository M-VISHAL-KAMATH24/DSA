import java.util.*;
 class Parent{
    Parent(){
        System.out.println("hello from the parent");
    }
}
class Child extends Parent{
    Child(){
        super();
        System.out.println("hi from the child");
    }
}
public class P1 {
    public static void main(String args[]){
        Child p1=new Child();
    }
    
}
