import java.util.*;
class Importatnt{
    private String name;//this variable cantb be accessed outside the class important

    //getter method used to access the private variable
    public String getname(){
        return name;
    }
    //setter method used to modify the prpivate variable
    public void setname(String n){
        this.name=n;
    }
}
public class GetterAndSetter {
    public static void main(String args[]){
        Importatnt i=new Importatnt();
        i.setname("rahul");
        System.out.println(i.getname());
    }


    
}
