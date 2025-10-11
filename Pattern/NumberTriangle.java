import java.util.*;
public class NumberTriangle {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the height of the traingle");
        int n=sc.nextInt();
        if(n<0){
            System.out.println("height must be positive");
            return;
        }
        for(int row=1;row<=n;row++){
            for(int num=1;num<=row;num++){
                System.out.print(num+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
