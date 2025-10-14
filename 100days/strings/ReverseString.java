import java.util.*;
public class ReverseString {
    public static String reverse(String s){
        String reverse="";
        for(int i=s.length()-1;i>=0;i--){
            reverse=reverse+s.charAt(i);
        }
        return reverse;
    }


    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(reverse(s));
    }
    
}
