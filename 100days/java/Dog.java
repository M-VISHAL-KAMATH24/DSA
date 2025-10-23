public class Dog{
    String name;
    int roll_no;
    String ph_no;
    
    void talk(){
        System.out.println("hello"+ " "+name);
    }
    public static void main(String args[]){
        Dog mydog=new Dog();
        mydog.name="rayan";
        mydog.talk();
        
    }
}