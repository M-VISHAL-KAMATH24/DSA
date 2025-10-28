import java.util.*;
public class DecimalTOBinary {
    public static int DecTObin(int decimal){
        if(decimal==0){
            return 0;
        }
        String binary="";
        while(decimal>0){
            int remainder=decimal%2;
            binary=remainder+binary;
            decimal=decimal/2;
        }
        int res=Integer.parseInt(binary);
        return res;
    }

    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the number");
        int decimal=sc.nextInt();
        int result=DecTObin(decimal);
        System.out.println(result);
    }
    
}
