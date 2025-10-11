import java.util.*;
public class SquareofStars {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the height of the traingle");
        int n=sc.nextInt();
        if(n<0){
            System.out.println("height must be positive");
            return;
        }
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++){
                System.out.print("*"+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
