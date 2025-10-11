import java.util.*;
public class FullDiamond {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the height of the diamond");
        int n=sc.nextInt();
        if(n<=0){
            System.out.println("must be positive");
            return;
        }
        for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++){
                System.out.print(" ");
            }
            for(int star=1;star<=(2*row-1);star++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int row=n-1;row>=1;row--){
            for(int space=1;space<=n-row;space++){
                System.out.print(" ");
            }
            for(int star=1;star<=(2*row-1);star++){
                System.out.print("*");
            }
            System.out.println();

        }
        sc.close();
    }
    
}
