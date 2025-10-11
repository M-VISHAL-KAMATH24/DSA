import java.util.*;
public class FloydsTriangle {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of rows");
        int n=sc.nextInt();
        if(n<=0){
            System.out.println("enter the positive number");
            return;
        }
        int number=1;
        for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++){
                System.out.print(number+" ");
                number++;
            }
            System.out.println();
        }
        sc.close();
    }

    
}
