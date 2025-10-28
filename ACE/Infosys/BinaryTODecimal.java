import java.util.*;
public class BinaryTODecimal {
    public static int BinToDeC(String binary){
        int decimal=0;
        int power=0;
        for(int i=binary.length()-1;i>=0;i--){
            char bit=binary.charAt(i);
            if(bit== '1'){
                decimal+=Math.pow(2,power);
            }
            power++;
        }
        return decimal;
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the binary");
        String bin=sc.nextLine();
        int res=BinToDeC(bin);
        System.out.println(res);
        sc.close();
    }
    
}
