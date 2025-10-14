import java.util.*;
public class StringPalindrome2 {
    public static boolean checkPalindrome(String s){
        s=s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        String reverse="";
        for(int i=s.length()-1;i>=0;i--){
            reverse=reverse+s.charAt(i);
        }
        return s.equals(reverse);
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(checkPalindrome(s));
    }
    
}
