public class ConstructorsType {
    String name;
    String adress;
    int rollno;

    //creating an parametrized constructor
    public ConstructorsType(String name,String adress,int rollno){
        this.name=name;
        this.adress=adress;
        this.rollno=rollno;
    }
    //Creating an default constructor
    public ConstructorsType(){
        name="vishu";
        adress="puttur";
        rollno=55;
    }
    //creating an copy constructor
    public ConstructorsType(ConstructorsType otherConstructorsType){
        this.name=otherConstructorsType.name;
        this.adress=otherConstructorsType.adress;
        this.rollno=otherConstructorsType.rollno;
    }
    public void printing(){
        System.out.println(name+" "+rollno+" "+adress+" ");
    }

    public static void main(String args[]){
        System.out.println("calling parameterized constructor");
        ConstructorsType c1=new ConstructorsType("rayan","shaktinagar",5);
        c1.printing();
        System.out.println("calling defualt constructor");
        ConstructorsType c2=new ConstructorsType();
        c2.printing();
        System.out.println("calling copy constructor");
        ConstructorsType c3=new ConstructorsType(c2);
        c3.printing();
    }
    
}
