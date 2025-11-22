import java.util.*;

    class MathematicalOperation{

        //method1
        int add(int a,int b){
            return a+b;
        }
        //method2 with the same name but different parameters hsowing the method overloading
        double add(double a,double b){
            return a+b;
        }
        int add(int a,int b,int c){
            return a+b+c;
        }
    }
    class Animal{
        void bark(){
            System.out.println("ewwwwww.....!");
        }
    }
    class Dog extends Animal{
        //method overriding
        @Override
        void bark(){
            System.out.println("bow boww");
        }
    }
    public class MethodRevision {

    public static void main(String args[]){
        MathematicalOperation m=new MathematicalOperation();
        int res1=m.add(2,3);
        double res2=m.add(2.3,3.6);
        int res3=m.add(2,3,5);
        System.out.println(res1);
        System.out.println(res2);
        System.out.println(res3);

        Animal a=new Animal();
        a.bark();

        Dog d=new Dog();
        d.bark();

    }
    
}
